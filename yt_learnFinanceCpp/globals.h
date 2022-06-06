#ifndef GLOBALS_H_
#define GLOBALS_H_

const int gMonthsInYear = 12;
const int gPercentDenominator = 100;

struct gAmortizeMonth {
    int year;
    int yearMonth;
    long loanMonth;
    double payment;
    double pureInterest;
    double paidDownPrincipal;
    double principalBalance;

};


#endif // GLOBALS_H_
