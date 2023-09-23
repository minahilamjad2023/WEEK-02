#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

   cout << "Enter a 4-digit number: ";
   cin >> number;

    if (number >= 1000 && number <= 9999) {
        int thousands = number / 1000 ;
        
        int hundreds = (number % 1000) / 100;
        int tens = (number % 100) / 10;
        int ones = number % 10;
        

        sum = thousands+ hundreds + tens + ones;

       cout << "Sum of the individual digits: " << sum << endl;
    } else {
        cout << "Please enter a valid 4-digit number." <<endl;
    }

    return 0;
}