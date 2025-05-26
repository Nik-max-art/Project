// File 1 : Main menu and setup
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    float price;
};

void showMenu();
void addBook(vector<Book>& books);
void viewBooks(const vector<Book>& books);
void searchBook(const vector<Book>& books);
void deleteBook(vector<Book>& books);
void saveBooks(const vector<Book>& books, const string& filename);
void loadBooks(vector<Book>& books, const string& filename);
void sortBooks(vector<Book>& books);

int main() {
    vector<Book> books;
    string filename = "library_data.txt";
    loadBooks(books, filename);

    int choice;
    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: addBook(books); break;
            case 2: viewBooks(books); break;
            case 3: searchBook(books); break;
            case 4: deleteBook(books); break;
            case 5: sortBooks(books); break;
            case 6: saveBooks(books, filename); break;
            case 0: saveBooks(books, filename); cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}

void showMenu() {
    cout << "\n--- Library Management System ---\n";
    cout << "1. Add Book\n";
    cout << "2. View All Books\n";
    cout << "3. Search Book\n";
    cout << "4. Delete Book\n";
    cout << "5. Sort Books\n";
    cout << "6. Save Books\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

// File 2 : Add and View books
#include <iostream>
#include <vector>
#include "book.h"
using namespace std;

void addBook(vector<Book>& books) {
    Book b;
    cout << "Enter book ID: ";
    cin >> b.id;
    cin.ignore();
    cout << "Enter title: ";
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    cout << "Enter price: ";
    cin >> b.price;
    books.push_back(b);
    cout << "Book added successfully.\n";
}

void viewBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    cout << "\n--- List of Books ---\n";
    for (const auto& b : books) {
        cout << "ID: " << b.id << "\n";
        cout << "Title: " << b.title << "\n";
        cout << "Author: " << b.author << "\n";
        cout << "Price: $" << b.price << "\n";
        cout << "-------------------------\n";
    }
}

// File 3 : Update/edit Book information
#include <iostream>
#include <vector>
#include "book.h"
using namespace std;

void editBook(vector<Book>& books) {
    int id;
    cout << "Enter Book ID to edit: ";
    cin >> id;
    cin.ignore();

    for (auto& b : books) {
        if (b.id == id) {
            cout << "Editing Book: " << b.title << "\n";
            cout << "New Title (leave empty to keep current): ";
            string title;
            getline(cin, title);
            if (!title.empty()) b.title = title;

            cout << "New Author (leave empty to keep current): ";
            string author;
            getline(cin, author);
            if (!author.empty()) b.author = author;

            cout << "New Price (enter -1 to keep current): ";
            float price;
            cin >> price;
            if (price >= 0) b.price = price;

            cout << "Book updated successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}
