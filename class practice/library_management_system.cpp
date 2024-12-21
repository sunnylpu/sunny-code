#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    public:
        int id;
        string title;
        string author;
        bool isIssued;

        Book(int id, string title, string author) {
            this->id = id;
            this->title = title;
            this->author = author;
            this->isIssued = false;
        }
};

class Library {
    private:
        vector<Book> books;

    public:
        void addBook(int id, string title, string author) {
            Book newBook(id, title, author);
            books.push_back(newBook);
            cout << "Book added successfully!" << endl;
        }

        void displayBooks() {
            if (books.empty()) {
                cout << "No books available in the library." << endl;
            } else {
                for (Book &book : books) {
                    cout << "ID: " << book.id
                         << ", Title: " << book.title
                         << ", Author: " << book.author
                         << ", Status: " << (book.isIssued ? "Issued" : "Available") << endl;
                }
            }
        }

        void issueBook(int id) {
            for (Book &book : books) {
                if (book.id == id) {
                    if (book.isIssued) {
                        cout << "Sorry, this book is already issued." << endl;
                    } else {
                        book.isIssued = true;
                        cout << "Book issued successfully!" << endl;
                    }
                    return;
                }
            }
            cout << "Book with ID " << id << " not found." << endl;
        }

        void returnBook(int id) {
            for (Book &book : books) {
                if (book.id == id) {
                    if (book.isIssued) {
                        book.isIssued = false;
                        cout << "Book returned successfully!" << endl;
                    } else {
                        cout << "This book was not issued." << endl;
                    }
                    return;
                }
            }
            cout << "Book with ID " << id << " not found." << endl;
        }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string title, author;
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                library.addBook(id, title, author);
                break;
            }
            case 2:
                library.displayBooks();
                break;
            case 3: {
                int id;
                cout << "Enter Book ID to issue: ";
                cin >> id;
                library.issueBook(id);
                break;
            }
            case 4: {
                int id;
                cout << "Enter Book ID to return: ";
                cin >> id;
                library.returnBook(id);
                break;
            }
            case 5:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}