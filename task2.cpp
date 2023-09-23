#include <iostream>
using namespace std;

int main() {
    int numberOfMinutes;
    int framesPerSecond;

    cout << "Number of Minutes: ";
    cin >> numberOfMinutes;

    cout << "Frames per Second: ";
    cin >> framesPerSecond;

    
    int totalFrames = numberOfMinutes * 60 * framesPerSecond;

    cout << "Total Number of Frames: " << totalFrames << std::endl;

    return 0;
}



