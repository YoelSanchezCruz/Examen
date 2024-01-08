#include "car.h"
#include <iostream>
#include <string>

int main() {
  Car coche1, coche2;
  std::cout << "Introduzca el primer coche(modelo, matricula, kilometraje): ";
  std::cin >> coche1;  
  std::cout << "Introduzca el segundo coche: ";
  std::cin >> coche2;
  if (coche1 > coche2) {
    std::cout << "El " << coche1 << " esta por encima en la lista de kilometros que " << coche2 << std::endl;
  } else if (coche1 == coche2) {
     std::cout << "El " << coche1 << " esta en la misma posicion en la lista de kilometros que " << coche2 << std::endl;
  } else {
     std::cout << "El " << coche1 << " esta por debajo en la lista de kilometros que " << coche2 << std::endl;
  }
  return 0;
}
