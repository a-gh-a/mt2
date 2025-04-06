#include <iostream>
#include <string>
using namespace std;

class Book {

    string title;
    string author;
    string ISBN;
    int s;

public:

    Book(){ title="Unknown", author="Unknown", ISBN="0000", s=0 };


    Book(string t, string a, string isbn, int c)
        : title(t), author(a), ISBN(isbn), s(c >= 0 ? c : 0) {}

    // Copy Constructor
    Book(const Book& b) {
        title = b.title;
        author = b.author;
        ISBN = b.ISBN;
        s = b.s;
    }

    // Destructor
    ~Book() {
        cout << "کتاب حذف شد!" << endl;
    }








    int main()
    {







    }
