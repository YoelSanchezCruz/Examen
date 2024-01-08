#include <iostream>
#include "Es_Guay.h"

int main() {
  int numero{};
  std::cout << "Introduzca un número: ";
  std::cin >> numero;
  if (EsGuay(numero)) {
    std::cout << "Es guay" << std::endl;
  } else {
    std::cout << "No es guay" << std::endl;
  }
  return 0;
}
