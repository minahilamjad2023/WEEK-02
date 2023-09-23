#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of sides of the polygon: ";
    std::cin >> n;

    if (n < 3) {
        std::cout << "A polygon must have at least 3 sides." << std::endl;
    } else {
        int sum = (n - 2) * 180;
        std::cout << "The sum of internal angles of a " << n << "-sided polygon is: " << sum << " degrees" << std::endl;
    }

    return 0;
}