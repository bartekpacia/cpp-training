#include <math.h>
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a value: " << std::endl;

    int value{0};
    std::cin >> value;
    std::cout << "You entered: " + std::to_string(value) << std::endl;

    int selection{0};
    std::cout << "1 to convert to radians" << std::endl;
    std::cout << "2 to convert to degrees" << std::endl;
    std::cin >> selection;

    if (selection == 1) {
        float radians = value * (M_PI / 180);
        std::cout << "Radians: " + std::to_string(radians) << std::endl;
    } else if (selection == 2) {
        float degrees = value * (180 / M_PI);
        std::cout << "Degrees: " + std::to_string(degrees) << std::endl;
    }

    return 0;
}