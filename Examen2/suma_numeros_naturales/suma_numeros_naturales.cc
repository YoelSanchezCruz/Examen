/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería e Informatica
 * Grado de Ingeniería Informatica
 * Informatica Basica
 *
 * @date 5 Jan 2024
 * @author Yoel Sanchez Cruz
 * @brief Suma desde el 0 hasta el numero que introduzca el usuario
**/

#include <iostream>
#include "suma_numeros_naturales.h"

int main() {
  int numero{};
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  int suma = Suma(numero);
  std::cout << "La suma desde el 0 a ese numero es: " << suma << std::endl;
  return 0;
}
