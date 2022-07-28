#include <iostream>
#include <cmath> // for std::exp()
#include <cassert>

using namespace std;

enum OptionType {Call, Put};

double cnorm(double);

double oneStepBinomialTree(OptionType optType, double K, double T,
                 double S_0, double sigma, double rate)
{
    double V_u, V_d;

    double b = std::exp((2*rate+sigma*sigma)*T)+1;
    double u = (b + std::sqrt(b*b - 4*std::exp(2*rate*T)))/2/std::exp(rate*T);
    double d = 1/u, S_u = S_0 * u, S_d = S_0 * d;
    double q_u = (std::exp(rate*T) - d) / (u -d);

    switch(optType) {
        case Call:
            V_u = S_u > K ? S_u - K : 0;
            V_d = S_d > K ? S_d - K : 0;
            break; //this is very important
        case Put:
            V_u = S_u < K ? K - S_u : 0;
            V_d = S_d < K ? K - S_d : 0;
            break;
        default:
            throw "unsupported optionType";
    }

    double V_0 = std::exp(-rate * T) * (q_u * V_u + (1 - q_u) * V_d);
    std::cout << "Thank you for trying!" << std::endl;

    return V_0;
}

double bsPricer (OptionType optType, double K, double T,
                 double S_0, double sigma, double rate)
{

    double sigmaSqrt = sigma * sqrt(T);
    double d1 = (log(S_0 / K ) + rate * T) / sigmaSqrt + 0.5 * sigmaSqrt;
    double d2 = d1 - sigmaSqrt;

    double V_0;
    switch (optType) {
        case Call:
            V_0 = S_0 * cnorm(d1) - K * exp(-rate*T) * cnorm(d2);
            break;

        case Put:
            V_0 = K * exp(-rate*T) * cnorm(-d2) - S_0 * cnorm(-d1);
            break;

        default:
            throw "unsupported Option Type";
    }

    cout << "Thank you for trying BS pricer" << endl;
    return V_0;

}


int main() {
    OptionType optType;
    double K, T, S_0, sigma, rate, V_u, V_d, S_u, S_d;

    cout << "option type (0 for call and 1 for put): ";

    int optType_;
    cin >> optType_;
    assert(optType_ == 0 || optType_ == 1);
    optType = OptionType(optType_);

    cout << "strike: ";
    cin >> K;

    cout << "time to expiry: ";
    cin >> T;

    cout << "current value of underlying stock: ";
    cin >> S_0;

    cout << "risk free interest rate: ";
    cin >> rate;

    cout << "implied vol: ";
    cin >> sigma;

    double V_tree = oneStepBinomialTree(optType, K, T, S_0, sigma, rate);
    double V_bs = bsPricer(optType, K, T, S_0, sigma, rate);
    cout << "The option price of one step binomial tree is: "
        << V_tree << endl;

    cout << "The option price of black scholes formula is: "
        << V_bs << endl;


}


// double cnorm (double x) {

//     double a1 = 0.254829592;
//     double a2 = -0.284496736;
//     double a3 = 1.421413741;
//     double a4 = -1.453152027;
//     double a5 = 1.061405429;
//     double p = 0.3275911;

//     int sign = x < 0 ? -1 : 1;

//     x = fabs(x) /sqrt(2.0);
//     double t = 1.0 /(1.0 + p*x);
//     double y = 1.0 - (((((a5 * t + a4) * t)+a3 ) * t + a2)* t + a1) * t * exp(-x*x);
//     return 0.5*(1.0 + sign * y);

// }

double cnorm (double x) {

    return erfc(-x / sqrt(2.0))/2.0;

}
