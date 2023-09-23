#include <iostream>
using namespace std;

int main() 
{
    int age;
    int numMoves;

     cout << "Enter the person's age: ";
     cin >> age;

     cout << "Enter the number of times they've moved: ";
      cin >> numMoves;

    
    int averageYearsInSameHouse = (age - numMoves) / (numMoves + 1)+ 1;

    cout << "Average number of years lived in the same house: " << averageYearsInSameHouse << endl;

    return 0;
}




