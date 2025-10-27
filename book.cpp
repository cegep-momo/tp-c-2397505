#include "book.h"
#include <iostream>
using namespace std;

// Constructeurs
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {}

// Get
string Book::getTitle() const {return title;}
string Book::getAuthor() const {return author;}
string Book::getISBN() const {return isbn;}
bool Book::getAvailability() const {return isAvailable;}
string Book::getBorrowerName() const {return borrowerName;}

// Set
void Book::setTitle(const string& t) {title=t;}
void Book::setAuthor(const string& a) {author=a;}
void Book::setISBN(const string& i) {title=i;}
void Book::setAvailability(bool available) {isAvailable = available;}
void Book::setBorrowerName(const string& name) {borrowerName = name;}

// Méthodes
void Book::checkOut(const string& borrower) {
    if (isAvailable) {
        isAvailable = false;
        borrowerName = borrower;
    }
}

void Book::returnBook() {
    isAvailable = true;
    borrowerName = "";
}

string Book::toString() const {
    string resultat = title + " — " + author + " (" + isbn + ")";
    if (isAvailable)
        resultat += " [Disponible]";
    else
        resultat += " [Emprunté par " + borrowerName + "]";
    return resultat;
}

string Book::toFileFormat() const {
    string line = title + "|" + author + "|" + isbn + "|";
    line += (isAvailable ? "1" : "0");
    line += "|" + borrowerName;
    return line;
}

void Book::fromFileFormat(const string& line) {
    int pos1 = line.find('|');
    int pos2 = line.find('|', pos1 + 1);
    int pos3 = line.find('|', pos2 + 1);
    int pos4 = line.find('|', pos3 + 1);
    title = line.substr(0, pos1);
    author = line.substr(pos1 + 1, pos2 - pos1 - 1);
    isbn = line.substr(pos2 + 1, pos3 - pos2 - 1);
    string available = line.substr(pos3 + 1, pos4 - pos3 - 1);
    borrowerName = line.substr(pos4 + 1);
    isAvailable = (available == "1");
}