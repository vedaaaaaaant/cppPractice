#include <iostream>
#include <cmath> // for std::exp()
#include <cassert>

using namespace std;

enum OptionType {Call, Put};

double cnorm(double);
int main() {
    OptionType optType;
    double K, T, S_0, sigma, rate, V_u, V_d;

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

    cout << "The option price is " << V_0 << endl;
    cout << "Thank you for trying BS pricer" << endl;
    return 0;
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
