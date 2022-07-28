#include <iostream>
using namespace std;

int main() {


    string test;
    cout << "Please select choose option type by typing CALL/PUT: " << endl;
    cin >> test;

    if (test == "CALL") {
        cout << "You have chosen: " << test << endl;
    }
    else if (test == "PUT") {
        cout << "You have chosen: " << test << endl;
    }
    else {
        throw "Unsupported Option Type";
    }

    return 0;

}
