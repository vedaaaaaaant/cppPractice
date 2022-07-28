#include <iostream>
#include <cmath> // for std::exp()
#include <cassert>

enum OptionType {Call, Put};
int main() {
    OptionType optType;
    double K, T, S_0, sigma, rate, V_u, V_d;

    std::cout << "option type (0 for call and 1 for put): ";

    int optType_;
    std::cin >> optType_;
    assert(optType_ == 0 || optType_ == 1);
    optType = OptionType(optType_);

    std::cout << "strike: ";
    std::cin >> K;

    std:: cout << "time to maturity: ";
    std::cin >> T;

    std::cout << "currrent value of the underlying stock: ";
    std::cin >> S_0;

    std::cout << "risk free interest rate: ";
    std::cin >> rate;

    std::cout << "implied vol: ";
    std::cin >> sigma;

    double b = std::exp((2*rate+sigma*sigma)*T)+1;
    double u = (b + std::sqrt(b*b - 4*std::exp(2*rate*T)))/2/std::exp(rate*T);
    double d = 1/u;

    double S_u = S_0 * u;
    double S_d = S_0 * d;
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
    std::cout << "The option price is: " << V_0 << std::endl;
    std::cout << "Thank you for trying!" << std::endl;

    return 0;
}
