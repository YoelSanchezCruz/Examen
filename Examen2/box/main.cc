#include "box.h"
#include <iostream>

int main() {
  Box caja1, caja2;
  std::cout << "Introduzca una caja (largo, fondo, y altura): ";
  std::cin >> caja1;
  std::cout << "Introduzca otra: ";
  std::cin >> caja2;
  if (caja1 == caja2) {
    std::cout << "Las cajas son iguales" << std::endl;
  } else {
    std::cout << "Las cajas son distintas" << std::endl;
  }
  std::cout << caja1 << " / " << caja2 << std::endl;
  return 0;
}
