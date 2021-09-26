#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Enumeration type refers to a list of user-defined symbolic constants which
    // represent integral values
    
    enum Choice {Yes, No};
    // order matters as the first in the list reps. 0 and the second reps 1
    // {No, Yes } (0, 1) is not the same as {Yes, No} (0, 1)
    
    Choice value = Yes;
    
    while (value) {
        cout << "Response code: YES" << endl;
    }
}