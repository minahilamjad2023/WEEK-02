#include <iostream>
using namespace std;

int main() {
    double totalPaint;
    double wallWidth;
    double wallHeight;
    
   
    cout << "Number of square meters you can paint: ";
    cin >> totalPaint;

   cout << "Width of the single wall (in meters): ";
   cin >> wallWidth;
    
    cout << "Height of the single wall (in meters): ";
    cin >> wallHeight;

    
    double wallArea = wallWidth * wallHeight;

    int numberOfWalls = static_cast<int>(totalPaint / wallArea);

    if (numberOfWalls > 0) {
        cout << "Number of walls you can paint: " << numberOfWalls <<endl;
    } else {
        cout << "You don't have enough paint to paint any walls." <<endl;
    }

    return 0;
}