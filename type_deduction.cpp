#include <iostream>
#include <string>
using namespace std;

int main()
{
    // automatic type deduction
    // the use of the 'auto' keyword automatically leads to a deduction of the 
    // variable type
    
    auto i = 345;
    auto f = 2111.35566;
    auto name {"Arturo"};
    
    cout << i << endl;
    cout << f << endl;
    cout << name;
    
    return 0;
}