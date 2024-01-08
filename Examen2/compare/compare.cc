#include <iostream>
#include <string>

int compararCadenas(const std::string& cadena1, const std::string& cadena2) {
    return cadena1.compare(cadena2);
}

int main() {
    std::string cadena1, cadena2;

    // Solicitar al usuario ingresar las dos cadenas
    std::cout << "Ingrese la primera cadena: ";
    std::getline(std::cin, cadena1);

    std::cout << "Ingrese la segunda cadena: ";
    std::getline(std::cin, cadena2);

    // Comparar las cadenas
    int resultado = compararCadenas(cadena1, cadena2);

    // Determinar la relación entre las cadenas
    if (resultado < 0) {
        std::cout << "\"" << cadena1 << "\" precede alfabéticamente a \"" << cadena2 << "\"." << std::endl;
    } else if (resultado > 0) {
        std::cout << "\"" << cadena2 << "\" precede alfabéticamente a \"" << cadena1 << "\"." << std::endl;
    } else {
        std::cout << "Ambas cadenas son iguales alfabéticamente." << std::endl;
    }

    return 0;
}

