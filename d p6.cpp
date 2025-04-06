#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    int copies;

public:
    // Default Constructor
    Book() : title("Unknown"), author("Unknown"), ISBN("0000"), copies(0) {}

    // Parameterized Constructor
    Book(string t, string a, string isbn, int c)
        : title(t), author(a), ISBN(isbn), copies(c >= 0 ? c : 0) {}

    // Copy Constructor
    Book(const Book& b) {
        title = b.title;
        author = b.author;
        ISBN = b.ISBN;
        copies = b.copies;
    }

    // Destructor
    ~Book() {
        cout << "کتاب حذف شد!" << endl;
    }

    // Setters
    void setTitle(string t) {
        title = t.empty() ? "Unknown" : t;
    }

    void setAuthor(string a) {
        author = a.empty() ? "Unknown" : a;
    }

    void setISBN(string isbn) {
        ISBN = isbn.empty() ? "0000" : isbn;
    }

    void setCopies(int c) {
        copies = (c < 0) ? 0 : c;
    }

    // Getters
    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getISBN() const {
        return ISBN;
    }

    int getCopies() const {
        return copies;
    }
};

int main() {
    // Object with Default Constructor
    Book book1;
    cout << "Default Constructor:" << endl;
    cout << "Title: " << book1.getTitle() << ", Author: " << book1.getAuthor()
         << ", ISBN: " << book1.getISBN() << ", Copies: " << book1.getCopies() << endl;

    // Object with Parameterized Constructor
    Book book2("C++ Programming", "Bjarne Stroustrup", "1234", 5);
    cout << "\nParameterized Constructor:" << endl;
    cout << "Title: " << book2.getTitle() << ", Author: " << book2.getAuthor()
         << ", ISBN: " << book2.getISBN() << ", Copies: " << book2.getCopies() << endl;

    // Object with Copy Constructor
    Book book3(book2);
    cout << "\nCopy Constructor:" << endl;
    cout << "Title: " << book3.getTitle() << ", Author: " << book3.getAuthor()
         << ", ISBN: " << book3.getISBN() << ", Copies: " << book3.getCopies() << endl;

    // Using Setters
    book1.setTitle("New Title");
    book1.setAuthor("New Author");
    book1.setISBN("5678");
    book1.setCopies(3);
    cout << "\nAfter using Setters:" << endl;
    cout << "Title: " << book1.getTitle() << ", Author: " << book1.getAuthor()
         << ", ISBN: " << book1.getISBN() << ", Copies: " << book1.getCopies() << endl;

    return 0;
}
