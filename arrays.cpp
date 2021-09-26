#include <iostream>
#include <string>
using namespace std;

int main()
{
     // arrays
    
    int nums[] = {3, 5, 7, 8, 11, 6, 7};
    string wordArr[10] = {};
    string word = "Wellington";
    char greeting[] = "Bonjour";
    
    
    for (int a = 0; a < 7; a++) {
        cout << nums[a] << endl;
    }
    
    for (int b = 0; b < 7; b++) {
        wordArr[b] = word[b];
    }
    
    cout << "----------------------" << endl;
    
    for (int c = 0; c < 7; c++) {
        cout << wordArr[c] << endl;
    }
    
    cout << "----------------------" << endl;
    
    for (int d = 0; d < 8; d++) {
        cout << greeting[d] << endl;
    }
}
