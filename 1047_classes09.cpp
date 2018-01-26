/*
an object only in heap
*/
#include <iostream>
#include <string>
using namespace std;

class IHeap
{
private:
    ~IHeap(){
        cout << "Destroying " << name << endl;
    }
    string name;

public:
    IHeap(string givenName = "IHeap")
    :name(givenName){}

    static void Destroy(IHeap* IHeapInstance)
    {
        //cout << "Destroying " << name << endl; // won't work as static
        delete IHeapInstance;
    }

    string GetName()
    {
        return name;
    }
    
};

int main(void)
{
    //IHeap test("Test0"); // won't work
    IHeap* test = new IHeap("Test1"); // allocates heap space
    cout << "Name: " << test->GetName() << endl;
    //delete test; // won't work
    //test->Destroy(test);
    IHeap::Destroy(test);
    return 0;
}