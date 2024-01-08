/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Ingeniería Infórmatica
 * Informática Básica
 *
 * @author Yoel Sanchez Cruz
 * @date 29 Dec 2023
 * @brief Te dice el digito mayor y el mas pequeño de un número
**/

#include <iostream>
#include <vector>
#include "max_min.h"
#include <algorithm>

/* @brief
 * @param
 * @return
*/
std::vector<int>Valores(int numero) { 
  std::vector<int> digitos;
  while (numero > 0) {
    int digito = numero % 10;
    digitos.emplace_back(digito);
    numero /= 10;
  }
  return digitos;
}

int Maximo(const std::vector<int>& digitos) {
  return *std::max_element(digitos.begin(), digitos.end());
}

int Minimo(const std::vector<int>& digitos) {
  return *std::min_element(digitos.begin(), digitos.end());
}
    
