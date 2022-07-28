#include <iostream>
#include <cstring>

using namespace std;

void printBook( struct Books book );

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
};


int main() {
    struct Books Book1;
    struct Books Book2;

    // book 1 specification
    strcpy( Book1.title, "Learn C++ Programming" );
    strcpy( Book1.author, "Chand Miyan" );
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 649507;

    // book 2 specification
    strcpy( Book2.title, "Telecom Billing" );
    strcpy( Book2.author, "Yakit Singha" );
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;


    // Print book1 info
    printBook(Book1);
    // cout << "Book 1 Title: " << Book1.title << endl;
    // cout << "Book 1 Author: " << Book1.author << endl;
    // cout << "Book 1 Subject: " << Book1.subject << endl;
    // cout << "Book 1 ID: " << Book1.book_id << endl;


    // Print book2 info
    printBook(Book2);
    // cout << "Book 1 Title: " << Book1.title << endl;
    // cout << "Book 2 Title: " << Book2.title << endl;
    // cout << "Book 2 Author: " << Book2.author << endl;
    // cout << "Book 2 Subject: " << Book2.subject << endl;
    // cout << "Book 2 ID: " << Book2.book_id << endl;

    return 0;

}

void printBook (struct Books book) {
    cout << "Book Title: " << book.title << endl;
    cout << "Book Author: " << book.author << endl;
    cout << "Book Subject: " << book.subject << endl;
    cout << "Book ID: " << book.book_id << endl;
}
