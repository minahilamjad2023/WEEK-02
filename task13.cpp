#include <iostream>
using namespace std;

int main() {
    int sum = 0; 
    int userInput;
    
    cout << "Enter 5 integers, one at a time:" <<endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> userInput;
        sum += userInput; // Add the input to the running sum
    }

    cout << "The sum of the 5 integers is: " << sum <<endl;

    return 0;
}