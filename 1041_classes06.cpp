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
        cout << "...in destructor" << endl;
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
};

int main(void)
{
    OzString hello("Hello World");
    cout << hello.GetString() << endl;
    
    return 0;
}