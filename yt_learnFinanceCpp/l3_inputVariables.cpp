#include <iostream>


using namespace std;

int main() {
    const int monthsInYear = 12;
    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;
    double interest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> interest;
    int yearsOfLoan = 30;
    cout << "Enter the number of years of loan: ";
    cin >> yearsOfLoan;

    double monthInterest = interest/monthsInYear;
    long monthsOfLoan = yearsOfLoan * monthsInYear;

    cout << principal << " " << interest << " " << yearsOfLoan << " " <<
        monthInterest << " " << monthsOfLoan << endl;

    return 0;
}
