#include <iostream>
using namespace std;

int main() {
   int initialVelocity;
   int acceleration;
   int time;
   int finalVelocity;

    cout << "Enter Initial Velocity (m/s): ";
    cin >> initialVelocity;

    cout << "Enter Acceleration (m/s^2): ";
    cin >> acceleration;

   cout << "Enter Time (s): ";
    cin >> time;

    
    finalVelocity = initialVelocity + (acceleration * time);

    cout << "Final Velocity (m/s): " << finalVelocity <<endl;

    return 0;
}