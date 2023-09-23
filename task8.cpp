#include <iostream>
using namespace std;

int main() {
    
    double vegetablePricePerKg, fruitPricePerKg;
    double totalKgVegetables, totalKgFruits;
    double totalEarnings;

    
    cout << "Enter vegetable price per kilogram (in coins): ";
    cin >> vegetablePricePerKg;

    cout << "Enter fruit price per kilogram (in coins): ";
    cin >> fruitPricePerKg;

    cout << "Enter total kilograms of vegetables: ";
    cin >> totalKgVegetables;

    cout << "Enter total kilograms of fruits: ";
    cin >> totalKgFruits;

   
    totalEarnings = (vegetablePricePerKg*totalKgVegetables/1.94)+(fruitPricePerKg*totalKgFruits/1.94);

    
    cout << "Total earnings in Rupees (Rps): " << totalEarnings << endl;

    return 0;
}