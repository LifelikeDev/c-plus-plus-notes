#include <iostream>
#include <string>
using namespace std;

int main()
{
    // pointers
    // a pointer is a variable that stores the address of another variable (in memory)
    
    int value;
    int *valuePnt;
    string name;
    string *namePnt;
    
    value = 34455;
    valuePnt = &value;
    name = "Meghan";
    namePnt = &name;
    
    cout << value << endl << valuePnt << endl;
    cout << name << endl << namePnt;
    
    return 0;
}