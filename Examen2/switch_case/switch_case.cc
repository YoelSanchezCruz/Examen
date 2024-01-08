#include "switch_case.h"
#include <iostream>
#include <sstream>
#include <string>

int main() {
  char caracter;
  std::cout << "Introduzca una cadena: ";
  while (std::cin >> caracter) {
    if (Comprobar_letra(caracter)) {
      Cambiar_letra(caracter);
    }
    std::cout << caracter;
  }
}
  
