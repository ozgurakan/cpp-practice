/*
custom string class
*/
#include <iostream>
using namespace std;

class OzString
{
private:
    char* buffer;

public:
    OzString(const char* givenString)
    {
        if (givenString != NULL)
        {
            buffer = new char [strlen(givenString) + 1];
            strcpy(buffer, givenString);
        } 
        else
            buffer = NULL;
    }

    ~OzString()
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

void PrintOzString(OzString str)
{
    cout << "in PrintOzString: " << str.GetString() << endl;
    cout << "in PrintOzString: " << &str << endl;
}

int main(void)
{
    OzString hello("Hello World");
    cout << "in main: " << hello.GetString() << endl;
    cout << "in main: ";
    hello.GetAddress();
    cout << endl;
    PrintOzString(hello);

    return 0;
}