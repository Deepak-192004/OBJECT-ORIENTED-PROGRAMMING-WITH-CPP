#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {
        cout << "Book created: " << title << " by " << author << ", " << year << endl;
    }
    ~Book() {
        cout << "Book destroyed: " << title << " by " << author << ", " << year << endl;
    }
    void displayDetails() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << year << endl;
    }
};

int main() {
    Book myBook("1984", "George Orwell", 1949);
    myBook.displayDetails();
    return 0;
}
