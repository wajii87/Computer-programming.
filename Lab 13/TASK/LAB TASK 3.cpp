#include <iostream>
#include <string>
using namespace std;

// Declare structure
struct Book
{
    string title;
    string author;
    float price;
    int pages;
};

int main()
{
    // Declare structure variables
    Book book1, book2;

    // Initialize book1 members
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.price = 1200.50;
    book1.pages = 450;

    // Initialize book2 members
    book2.title = "Data Structures";
    book2.author = "Mark Allen";
    book2.price = 950.75;
    book2.pages = 300;

    // Display book1 details
    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // Display book2 details
    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}
