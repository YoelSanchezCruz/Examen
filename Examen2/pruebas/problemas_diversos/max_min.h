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

#ifndef MAX_MIN_H
#define MAX_MIN_H

#include <vector>

std::vector<int>Valores(int numero);
int Maximo(const std::vector<int>& digitos);
int Minimo(const std::vector<int>& digitos);

#endif // MAX_MIN_H
