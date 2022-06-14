#include <iostream>
using namespace std;

int main() {
    int size =8;
    int count = 8;
    for (int row =1; row <= size; ++row) {
        int number = 1;
        for (int col = 1; col <=row; ++col) {
            cout << number << ' ';
            number++;
        }
        count--;
        cout << endl;
    }
    return 0;
}
