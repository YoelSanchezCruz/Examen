#include "abecedario.h"
#include <string>
#include <iostream>

int main() {
  std::string cadena;
  std::cout << "Introduzca una cadena: ";
  std::cin >> cadena;
  std::string cambio = CadenaCambiada(cadena);
  std::cout << "La cadena cambiada queda: " << cambio << std::endl;
  return 0;
} 
