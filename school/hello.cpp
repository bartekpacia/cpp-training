#include <iostream>
#include <string>

void greet(std::string greeting) { std::cout << greeting << std::endl; }

int main() {
    std::string greeting = "Hello, World from C++!";

    greet(greeting);

    getchar();

    return 0;
}