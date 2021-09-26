#include <iostream>
using namespace std;

int main()
{
   // pointers
    // a pointer is a variable that stores the address of another variable (in memory)
    // * = indirection operator; allows access through a pointer; initializes a pointer
    // & = address operator; reads the address of a variable
    
    int value;
    
    cout << "Enter any number between 10 and 100: ";
    cin >> value;
    
    int *valuePointer = &value;
    cout << value << " " << *valuePointer << endl;
    
    // incrementing the value of valuePointer
    ++*valuePointer;
    cout << value << " " << *valuePointer << endl;
    
    
    return 0;
}