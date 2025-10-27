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