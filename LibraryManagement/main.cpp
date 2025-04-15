#include <iostream>
#include "librarian.h"
#include "library.h"
#include "student.h"
#include "book.h"

using namespace std;

int main()
{
    Book *b1 = new Book{"C programming",12345};
    Book *b2 = new Book{"C++",67890};
    Book *b3 = new Book{"Python",54321};

    Library *library = new Library();
    library->m_booklist.push_back(b1);
    library->m_booklist.push_back(b2);
    library->m_booklist.push_back(b3);

    Librarian *lib = new Librarian();
    lib->setname("Pallavi");
    lib->setBook(b1,b2,b3);

    Student *stu =new Student();
    stu->setname("Varshini");
    stu->setlibrarian(lib);

    cout<<stu->getname() << "is asking book to " << stu->getlibrarian()->getname() << " Librarian "<<endl;

    if(!library->m_booklist.empty())
    {
        Book *book = library->m_booklist.front();
        library->m_booklist.pop_front();
        cout << stu->getname() << " takes the book: "<< book->gettitle() <<endl;
    }

    cout << "Remaining books in library: "<<endl;
    for(auto i : library->m_booklist)
    {
        cout << i->gettitle() <<endl;
    }
    delete b1;
    delete b2;
    delete b3;
    delete lib;
    delete stu;
    delete library;

    return 0;
}

