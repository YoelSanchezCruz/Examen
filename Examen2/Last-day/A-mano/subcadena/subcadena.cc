#include "subcadena.h"
#include <iostream>

int main() {
  std::string cadena1, cadena2;
  std::cout << "Introuzca la cadnea y la sucadena: ";
  std::cin >> cadena1 >> cadena2;
  if (Subcadena(cadena1, cadena2)) {
    std::cout << "Es subcadena" << std::endl;
  } else {
    std::cout << "No lo es" << std::endl;
  }
  return 0;
}
