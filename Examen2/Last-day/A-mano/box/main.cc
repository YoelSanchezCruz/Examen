#include "box.h"

int main() {
  Box caja1, caja2;
  std::cout << "Dime una caja: ";
  std::cin >> caja1;
  std::cout << "Otra: ";
  std::cin >> caja2;
  if (caja1 == caja2) {
    std::cout << "Iguales" << std::endl;
  } else {
    std::cout << "No son iguales" << std::endl;
  }
  std::cout << caja1 << " / " << caja2 << std::endl;
  double suma = caja1.Suma();
  std::cout << suma << std::endl;
  return 0;
}
