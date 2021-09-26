#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    char letter;
    double money;
    
	// copy initialization
    num = 23;
    letter = 'I';
    money = 5635.93;
    
	// variable initialization
    int anotherChar {'B'};
    float weight {212.2345};
    
    cout << num << endl;
    cout << letter << endl;
    cout << money << endl;
    cout << anotherChar << endl;
    cout << weight << endl;
    
    return 0;
}