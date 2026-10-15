#include <iostream>
#include <cstring>
using namespace std;

class Book{
    private:
        char *title, *author;
        int pages;
        double price;
        static int totalBooks;
    public:
        Book() : title(nullptr), author(nullptr), pages(0), price(0.0) { totalBooks++; }
        Book(char *t, char *a, int pa, int pr) : pages(pa), price(pr) {
            title = new char[strlen(t) + 1];
            strcpy(title, t);
            author = new char[strlen(a) + 1];
            strcpy(author, a);
        }
        Book(const Book &other): pages(other.pages), price(other.price) {
            title = new char[strlen(other.title) + 1];
            strcpy(title, other.title);
            author = new char[strlen(other.author) + 1];
            strcpy(author, other.author);
        }
        
};