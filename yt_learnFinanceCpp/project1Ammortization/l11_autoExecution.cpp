#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"
#include "globals.h"

using namespace std;

double divisor();
double multiplier();


int main(int argc, char* argv[]) {

    double principal = 0.0;
    double humanInterest = 0.0;
    int yearsOfLoan = 30;

    if (argc == 1) {

        cout << "Enter the principal amount: ";
        cin >> principal;

        cout << "Enter the interest rate: ";
        cin >> humanInterest;

        cout << "Enter the number of years of loan: ";
        cin >> yearsOfLoan;

    } else {

        principal = atof(argv[1]);
        humanInterest = atof(argv[2]);
        yearsOfLoan = atoi(argv[3]);

    }

    cout << "Loan Principlal: " << principal << endl;
    cout << "Interest Rate: " << humanInterest << "%" << endl;
    cout << "Time Period: " << yearsOfLoan << " year(s)" << endl;

    double interest = divisor(humanInterest, gPercentDenominator);

    double monthInterest = divisor(interest, gMonthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, gMonthsInYear);

    double payment = 0.0;
    payment = principal * (monthInterest
                           / (1 - (pow((double)1 + monthInterest,
                                       (double)-monthsOfLoan))));
    cout << "Payment: "<< setiosflags(ios::fixed)
         << setprecision(2) << payment << endl;

    double currInterestPayment = 0.0;
    double currPrincipalPayment = 0.0;
    double currBalance = 0.0;

    currBalance = principal;

    long currLoanMonth = 1;

    while(currLoanMonth <= monthsOfLoan) {

        gAmortizeMonth amortMonth;

        currInterestPayment = currBalance * monthInterest;
        currPrincipalPayment = payment - currInterestPayment;
        currBalance = currBalance - currPrincipalPayment;

        amortMonth.year = 1;
        amortMonth.yearMonth = 1;
        amortMonth.loanMonth = currLoanMonth;
        amortMonth.payment = payment;
        amortMonth.pureInterest = currInterestPayment;
        amortMonth.paidDownPrincipal = currPrincipalPayment;
        amortMonth.principalBalance = currBalance;


        struct gAmortizeMonth {
            int year;
            int yearMonth;
            long loanMonth;
            double payment;
            double pureInterest;
            double paidDownPrincipal;
            double principalBalance;
        };

        cout << "CM: " << amortMonth.loanMonth
            << " CI: " << amortMonth.pureInterest
            << " CP: " << amortMonth.paidDownPrincipal
            << " Bal: " << amortMonth.principalBalance
            << endl;

        currLoanMonth++;

    }
    cout << "Loan payments complete." << endl;


    return 0;
}
