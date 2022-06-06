#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"

using namespace std;

double divisor();
double multiplier();


int main() {
    const int monthsInYear = 12;
    const int percentDenominator = 100;

    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;

    double humanInterest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> humanInterest;

    double interest = divisor(humanInterest, percentDenominator);


    int yearsOfLoan = 30;
    cout << "Enter the number of years of loan: ";
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, monthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

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
        cout << "CM: " << currLoanMonth << endl;
        currLoanMonth++;

    }
    cout << "Loan payments complete." << endl;


    return 0;
}
