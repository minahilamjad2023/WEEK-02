#include <iostream>
using namespace std;

int main() {
    
    string movieName;
    int  adultTicketPrice;
    int  childTicketPrice;
    int numAdultTicketsSold;
    int numChildTicketsSold;
    int  donationPercentage;

    cout << "Enter the movie name: ";
    string name;
    cin >> movieName;
   

    cout << "Enter the adult ticket price: $";
   cin >> adultTicketPrice;

    cout << "Enter the child ticket price: $";
    cin >> childTicketPrice;

   cout << "Enter the number of adult tickets sold: ";
    cin >> numAdultTicketsSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> numChildTicketsSold;

    cout << "Enter the percentage of the amount to be donated to charity: ";
    cin >> donationPercentage;

    
    double totalAmount = (adultTicketPrice * numAdultTicketsSold) + (childTicketPrice * numChildTicketsSold);

    
    double donationAmount = (donationPercentage / 100.0) * totalAmount;

    double remainingAmount = totalAmount - donationAmount;
    cout<<endl;

    cout << "Movie: " << movieName <<endl;
    cout << "Total amount generated from ticket sales: $" << totalAmount << endl;
    cout << "Donation to charity (" << donationPercentage << "%): $" << donationAmount << endl;
    cout << "Remaining amount after donation: $" << remainingAmount << endl;

    return 0;
}