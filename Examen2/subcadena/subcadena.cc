#include <iostream>
#include <string>

int main() {
  std::string cadena1, cadena2;
  std::cout << "Introduzca una cadena: ";
  std::cin >> cadena1;
  std::cout << "Introduzca otra cadena: ";
  std::cin >> cadena2;
  if (cadena1.find(cadena2) != std::string::npos) {
    std::cout << "La segunda cadena es una subcadena de la primera" << std::endl;
  } else {
    std::cout << "La segunda cadema no es subcadena de la primera" << std::endl;
  }
  return 0;
}
