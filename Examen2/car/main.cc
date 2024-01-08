#include "car.h"
#include <iostream>

int main() {
  Car coche1, coche2;
  std::cout << "Introduzca un coche(modelo, matricula y kilometros): ";
  std::cin >> coche1;
  std::cout << "Introduzca otro: ";
  std::cin >> coche2;
  if (coche1 > coche2) {
    std::cout << "El " << coche1 << " esta antes en la lista de kilometraje" << std::endl;
  } else if (coche1 < coche2) {
    std::cout << "El " << coche2 << " esta antes en la lista de kilometraje" << std::endl;
  } else {
    std::cout << "El " << coche1 << " y el " << coche2 << " tienen los mismos kilometros" << std::endl;
  }
  return 0;
}
