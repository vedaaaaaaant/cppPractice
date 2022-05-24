#include <iostream>
#include <string>

using namespace std;
int main()

{
    string user_name, last_name;
    cout << "Please enter your first name: ";
    cin >> user_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    // Greeting the user
    cout << '\n';
    cout << "Hello, ";
    cout << user_name;
    cout << " ";
    cout << last_name;
    cout << " ... and goodbye! \n";

    cout << '\n'
         << "Hello once again, "
         << user_name
         << " "
         << last_name
         << " ... and goodbye once again!\n";
    return 0;


}
