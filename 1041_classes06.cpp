/*
custom string class
crashes as object is copied but buffer is passed
by reference and this creates a problem with delete

shallow and deep copy using copy constructor
*/
#include <iostream>
using namespace std;

class BadString
{
private:
    char* buffer;

public:
    BadString(const char* givenString)
    {
        if (givenString != NULL)
        {
            buffer = new char [strlen(givenString) + 1];
            strcpy(buffer, givenString);
        } 
        else
            buffer = NULL;
        cout << "(def)Buffer points to: " << (unsigned int*)buffer << endl; // print address
    }

    ~BadString()
    {
        cout << "...in destructor for " << &buffer << endl;
        if (buffer != NULL)
            delete[] buffer;
    }

    int GetLength()
    {
        return strlen(buffer);
    }

    const char* GetString()
    {
        return buffer;
    }

    void GetAddress()
    {
        cout << &buffer;
    }

    char* Address()
    {
        return buffer;
    }
};

class GoodString
{
private:
    char* buffer;

public:
    GoodString(const char* givenString)
    {
        if (givenString != NULL)
        {
            buffer = new char[strlen(givenString) + 1];
            strcpy(buffer, givenString);
        }
        else
            buffer = NULL;
        cout << "(default) Buffer points to: " << (unsigned int*)buffer << endl; // print address
    }

    GoodString(const GoodString& source) // Copy constructor
    {
        buffer = NULL;
        cout << "Copying constructor" << endl;
        if (source.buffer != NULL)
        {
            buffer = new char[strlen(source.buffer) + 1];
            strcpy(buffer, source.buffer);
            cout << "(copy) Buffer points to: " << (unsigned int*)buffer << endl; // print address
        }
    }

    ~GoodString();
    int GetLength();
    const char* GetString();    
    char* Address();
};

GoodString::~GoodString()
{
    cout << "...in destructor for " << &buffer << endl;
    if (buffer != NULL)
        delete[] buffer;    
}

int GoodString::GetLength()
{
    return strlen(buffer);
}

const char* GoodString::GetString()
{
    return buffer;
}

char* GoodString::Address()
{
    return buffer;
}


void PrintBadString(BadString str)
{    
    cout << "(PrintBadString) Buffer points to: " << (unsigned int*)str.GetString() << endl;  
}

void PrintGoodString(GoodString str)
{
    cout << "(PrintGoodString) Object address : " << &str << endl;
    cout << "(PrintGoodString) Buffer points to: " << (unsigned int*)str.GetString() << endl;
}

int main(void)
{
    /*
    BadString hello("Hello World");
    cout << "in main: " << hello.GetString() << endl;
    cout << "in main: ";
    hello.GetAddress();
    cout << endl;
    PrintString(hello);
    */
    GoodString hello("Hello World");
    cout << "(main) Object address : " << &hello << endl;
    cout << "(main) Buffer points to: " << (unsigned int*)hello.GetString() << endl;
    PrintGoodString(hello);
    cout << "(main) Buffer points to: " << (unsigned int*)hello.GetString() << endl;
    PrintGoodString(hello);
    cout << "(main) Buffer points to: " << (unsigned int*)hello.GetString() << endl;

    return 0;
}