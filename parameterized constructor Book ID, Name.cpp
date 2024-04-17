#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Class representing a Book
class Book {
private:
    int bookID;
    string bookName;

public:
    // Parameterized constructor
    Book(int id, const string& name) : bookID(id), bookName(name) {}

    // Accessors
    int getBookID() const { return bookID; }
    string getBookName() const { return bookName; }
};

// Class representing a User
class User {
private:
    int regNo;
    string userName;

public:
    // Parameterized constructor
    User(int reg, const string& name) : regNo(reg), userName(name) {}

    // Accessors
    int getRegNo() const { return regNo; }
    string getUserName() const { return userName; }
};

int main() {
    // Stack for storing book details
    stack<Book> bookStack;

    // Stack for storing user details
    stack<User> userStack;

    // Adding book details using parameterized constructor
    Book book1(101, "Introduction to C++");
    Book book2(102, "Data Structures and Algorithms");

    // Pushing books onto the stack
    bookStack.push(book1);
    bookStack.push(book2);

    // Adding user details using parameterized constructor
    User user1(1001, "John Doe");
    User user2(1002, "Jane Smith");

    // Pushing users onto the stack
    userStack.push(user1);
    userStack.push(user2);

    // Checking the availability of a book in the stack
    int bookIDToFind = 101; // Book ID to find
    bool bookAvailable = false;

    stack<Book> tempStack = bookStack; // Create a copy of the book stack
    while (!tempStack.empty()) {
        if (tempStack.top().getBookID() == bookIDToFind) {
            bookAvailable = true;
            break;
        }
        tempStack.pop();
    }

    if (bookAvailable) {
        cout << "Book with ID " << bookIDToFind << " is available." << endl;
    } else {
        cout << "Book with ID " << bookIDToFind << " is not available." << endl;
    }

    // Distributing a book to a user
    if (!bookStack.empty() && !userStack.empty()) {
        Book distributedBook = bookStack.top();
        User borrowingUser = userStack.top();

        cout << "Distributing " << distributedBook.getBookName() << " to " << borrowingUser.getUserName() << endl;

        // Pop the distributed book and user from their respective stacks
        bookStack.pop();
        userStack.pop();
    } else {
        cout << "Cannot distribute book. Either book stack or user stack is empty." << endl;
    }

    return 0;
}
