#include <iostream>

int Suma(const int numero) {
  return numero * (numero + 1) / 2;
}

int main() {
  int suma{};
  int numero{};
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  suma = Suma(numero);
  std::cout << "La suma desde 0 a ese numero es: " << suma << std::endl;
  return 0;
}
