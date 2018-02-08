/*
dynamic casting

TYPE& dynamic_cast<TYPE&> (object);
TYPE* dynamic_cast<TYPE*> (object);

The dynamic_cast keyword casts a datum from one pointer or reference type to another, 
performing a runtime check to ensure the validity of the cast.

If you attempt to cast to pointer to a type that is not a type of actual object, 
the result of the cast will be NULL. If you attempt to cast to reference to a type 
that is not a type of actual object, the cast will throw a bad_cast exception.
*/
#include <iostream>
#include <string>
using namespace std;

class Thing
{
private:
    bool is_real;

public:
    Thing(bool in_is_real): is_real(in_is_real) {
        if (is_real)
            cout << "A real thing is created" << endl;
        else
            cout << "An imaginary thing is created" << endl;        
    }

    string IsReal() {
        if (is_real)
            return "real";
        return "imaginary";
    }

    virtual string GetName() = 0;
};

class Book: public Thing
{
private:
    string name;
    int page_count;

public:
    Book(string in_name, int in_page_count)
    : Thing(true), name(in_name), page_count(in_page_count) { }

    string GetName() {
        return name;
    }

    int GetPageCount() {
        return page_count;
    }
};

class Movie: public Thing
{
private:
    string name;
    int minutes;

public:
    Movie(string in_name, int in_minutes)
    : Thing(true), name(in_name), minutes(in_minutes) { }

    string GetName() {
        return name;
    }

    int GetMinutes() {
        return minutes;
    }
};

class Idea: public Thing
{
private:
    string name;
    string type;

public:
    Idea(string in_name, string in_type)
    : Thing(false), name(in_name), type(in_type) { }

    string GetName() {
        return name;
    }

    string GetType() {
        return type;
    }
};

void GetInfo(Thing* thing) {
    Book* book = dynamic_cast <Book*>(thing);
    if (book)
        cout << book->GetName() << " has " << book->GetPageCount() << " pages." << endl;
    
    Movie* movie = dynamic_cast <Movie*>(thing);
    if (movie)
        cout << movie->GetName() << " is " << movie->GetMinutes() << " minutes long." << endl;
    
    Idea* idea = dynamic_cast <Idea*>(thing);
    if (idea)
        cout << idea->GetName() << " is a " << idea->GetType() << " thing" << endl;
}

int main(void)
{
    Book* book = new Book("Goldfinger", 500);
    Movie* movie = new Movie("Matrix", 119);
    Idea* good = new Idea("Saving the World", "good");

    GetInfo(book);
    GetInfo(movie);
    GetInfo(good);

    return 0;
}