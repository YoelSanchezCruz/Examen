#include "numero_guay.h"
#include <iostream>

int main() {
  int numero;
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  if (Es_guay(numero)) {
    std::cout << "Es guay" << std::endl;
  } else {
    std::cout << "No es guay" << std::endl;
  }
  return 0;
}
