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
        cout << "buffer address: " << &buffer << endl;
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
    cout << "in PrintBadString: " << str.GetString() << endl;
    cout << "in PrintBadString: " << &str << endl;
}

void PrintGoodString(GoodString str)
{
    cout << "in PrintGoodString: " << str.GetString() << endl;    
    cout << "in PrintGoodString: " << &str << endl;
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
    cout << "hello address: " << &hello << endl;
    cout << "in main: " << hello.GetString() << endl;
    PrintGoodString(hello);

    return 0;
}