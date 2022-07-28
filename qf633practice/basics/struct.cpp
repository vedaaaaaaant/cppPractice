#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
enum OptionType {Call, Put};
double cnorm(double);

struct datetime_t {
    int year;
    int month;
    int day;
    int hour = 0;
    int min = 0;
    int sec = 0;
};

struct Market {
    datetime_t asof;
    double spot;
    double volatility;
    double rate;
};

struct EuropeanOption {
    OptionType optType;
    double strike;
    datetime_t expiryDate;
};

double operator-(const datetime_t& d1, const datetime_t& d2) {

    int yearDiff = d1.year - d2.year;
    int monthDiff = d1.month - d2.month;
    int dayDiff = d1.day - d2.day;
    int hourDiff = d1.hour - d2.hour;
    int minDiff = d1.min - d2.min;
    int secDiff = d1.sec - d2.sec;
    return yearDiff + monthDiff / 12.0 + dayDiff / 365.0 + hourDiff / 8760 +
        minDiff / 525600.0 + secDiff / 31536000.0;

}

double bsAnalytic (const Market& market, const EuropeanOption& trade) {
    double T = trade.expiryDate - market.asof;
    double sigmaSqrtT = market.volatility * std::sqrt(T);
    double rate = market.interestRate;
    double K = trade.strike;
    double S_0 = market.stockPrice;
    double d1 = (std::log(S_0 / K ) + rate)  / sigmaSqrtT + 0.5 * sigmaSqrtT;
    double d2 = d1 - sigmaSqrtT;
    double V_0;

    switch (trade.optType) {
        case Call:
            V_0 = S_0 * cnorm(d1) - K * exp(-rate* T) * cnorm(d2);
            break;
        case Put:
            V_0 = K * exp(-rate*T) * cnorm(-d2) - S_0 * cnorm(-d1);
            break;
        default:
            throw "unsupported optionType";
    }

    return V_0;

}
