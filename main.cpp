#include <iostream>
using namespace std;

int main()
{
    int firstNumber = 12;
    
    cout << "While Loop Example" << endl << endl;
    
    while (firstNumber > 0) {
        cout <<"The First Number is " << firstNumber << endl;
        firstNumber = firstNumber - 1;
    }
    cout << "  " << endl;
    cout << "For Loop example:" << endl << endl;
    
    int i; //loop counter
    for (i=0; i<12; i = i + 1 ) {
        cout << "For Loop, i equals " << i << endl;
    }
    return 0;
}