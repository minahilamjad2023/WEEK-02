#include <iostream>
using namespace std;

int main() {
   
    string name;
    int  targetWeightLoss;
    int  daysRequired;

    cout << "Enter the Name of the Person: ";
    cin >> name;
    
    cout << "Enter the target weight loss in kilograms: ";
    cin >> targetWeightLoss;

    daysRequired = targetWeightLoss * 15 ;

    cout << name << " will need " << daysRequired << " days to lose " << targetWeightLoss << " kg of weight by following the doctor's suggestions " << endl;

  
}