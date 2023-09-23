#include <iostream>
using namespace std;

int main() {

    int bagSizeInPounds;
    int bagCost;
    int areaCoveredByBag;
    int costPerPound;
    int costPerSquareFoot;

    cout << "Enter the size of the fertilizer bag in pounds: ";
    cin >> bagSizeInPounds;

   cout << "Enter the cost of the bag: $";
    cin >> bagCost;

   cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> areaCoveredByBag;

    
    costPerPound = bagCost / bagSizeInPounds;

    
    costPerSquareFoot =  bagCost / areaCoveredByBag ;

    cout << "Cost of fertilizer per pound: $" << costPerPound << endl;
    cout << "Cost of fertilizing per square foot: $" << costPerSquareFoot <<endl;

    return 0;
}