#include <iostream>
#include "book.h"
#include "student.h"
#include "librarian.h"
#include "library.h"

using namespace std;

int main() {
    Librarian librarian("Pallavi");
    Library library;

    Book book1("C++ Programming", "Balagurusamy", 101, true);
    Book book2("C programming", "Balagurusamy", 102, true);
    Book book3("Python", "Balagurusamy", 103, false);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    string studentName = "Varshini";
    Student student(1, studentName);

    string requestedBook = "C programming";
    librarian.issueBook(requestedBook, student, library);

    student.showBorrowedBooks();


    return 0;
}
