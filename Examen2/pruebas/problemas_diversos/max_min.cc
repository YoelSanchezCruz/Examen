#include "max_min.h"
#include <iostream>
#include <vector>

int main() {
  int numero;
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  std::vector<int> digitos = Valores(numero);
  int maximo = Maximo(digitos);
  int minimo = Minimo(digitos); 
  std::cout << "El maximo es: " << maximo << " y el minimo es: " << minimo << std::endl;
  return 0;
}
