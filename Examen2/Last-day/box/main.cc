#include "box.h"

int main() {
  Box caja1, caja2;
  std::cout << "Largo, ancho, alto: ";
  std::cin >> caja1;
  std::cout << "Otra vez: ";
  std::cin >> caja2;
  if (caja1 == caja2) {
    std::cout << "Son iguales" << std::endl;
  } else {
    std::cout << "Son distintas" << std::endl;
  }
  std::cout << caja1 << " / " << caja2 << std::endl;
  return 0;
}
