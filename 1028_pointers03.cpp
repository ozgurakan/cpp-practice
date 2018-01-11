/*
accessing list via pointers
*/
#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int* list = new int[size];
    int* pList = list;
    
    cout << "address for list : " << &list << endl;
    cout << "address for pList: " << &pList << endl;
    

    for (int i = 0; i < size; i++)
    {
        *list = 100 + i;
        cout << list << " | " << pList << " -> " << *(list) << " | " << pList[i] << endl;
        cout << "address for list : " << &list << " | " << "address for pList : " << &pList <<  endl;
        //cout << list << " -> " << pList[i] << endl;
        ++list;
    }
    //delete[] list;
    delete pList;
    cout << pList << " -> " << pList[2] << endl;
    
    

    return 0;
}