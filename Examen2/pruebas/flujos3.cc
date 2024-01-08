#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::string palabra;

    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);

        // Lee y muestra cada palabra de la línea
        while (iss >> palabra) {
            std::cout << palabra << std::endl;
        }
    }

    return 0;
}

