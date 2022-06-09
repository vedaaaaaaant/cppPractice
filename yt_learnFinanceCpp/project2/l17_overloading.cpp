#include <iostream>

using namespace std;

void printOutName(char inputString[]){
    for (int i = 0; inputString[i] != '\0'; i++)
    {
        cout << inputString[i];
    }
    cout << endl;
}

void printOutName(string inputString) {
    cout << inputString << endl;
}

int main(int argc, const char * argv[1]) {

    const int sizeFive = 5;
    const int sizeFour = 4;

    int aInt1[sizeFive];
    int i = 0;
    aInt1[i++] = 1000;
    aInt1[i++] = 1001;
    aInt1[i++] = 1002;
    aInt1[i++] = 1003;
    aInt1[i++] = 1004;

    for (int iCount = 0; iCount < sizeFive; iCount++) {
        cout << "aInt1[" << iCount << "]: " << aInt1[iCount] << endl;
    }

    cout << endl;

    int aInt2[] = {2001, 2002, 2003, 2004, 2005};

    for (int i = 0; i < sizeFive; i++) {
        cout << "aInt2[" << i << "]: " << aInt2[i] << endl;
    }

    cout << endl;

    int aInt3[sizeFive];


    for (int i = 0; i < sizeFive; i++) {
        aInt3[i] = 3000 + i;
    }

    for (int i = 0; i < sizeFive; i++) {
        cout << "aInt3[" << i << "]: " << aInt3[i] << endl;
    }


    cout << endl;

    int aInt4[5][4];

    int testNum = 100;
    for (int i = 0; i < 5; i++) {
        for (int j =0; j < 4; j++) {
            aInt4[i][j] = testNum++;

        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j =0; j < 4; j++) {
            cout << aInt4[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int aInt5[sizeFive][sizeFour] = {
    {11,12,13,14},
    {21,22,23,24},
    {31,32,33,34},
    {41,42,43,44},
    {51,52,53,54},
};


    for (int i = 0; i < 5; i++) {
        for (int j =0; j < 4; j++) {
            cout << aInt5[i][j] << " ";
        }
        cout << endl;
    }

    // Chars and strings
    char aCharacter = 'x';
    cout << "aCharacter: >" << aCharacter << "<" << endl;

    char firstName[] = { 'A', 'n', 'd', 'y', '\0'};

    printOutName(firstName);

    char secondName[] = "James";

    printOutName(secondName);

    string thirdName = "Duncan";

    printOutName(thirdName);



    return 0;
}
