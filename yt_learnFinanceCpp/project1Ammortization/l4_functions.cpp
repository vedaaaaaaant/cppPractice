#include <iostream>

using namespace std;

double divisor(double numerator, double denominator) {

    // This function divides two numbers and returns the results
    return numerator/denominator;
}

double multiplier(double firstNum, double secondNum){
    return firstNum * secondNum;
}


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

    cout << principal << " " << interest << " " << yearsOfLoan << " " <<
        monthInterest << " " << monthsOfLoan << endl;

    return 0;
}
