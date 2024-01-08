#include "suma_numeros_naturales.h"

/* @brief Suma los numeros
 * @param Recibe el numero introducido por el usuario
 * @return Devuelve la suma
*/
int Suma(const int numero) {
  int suma{};
  for (int i = numero; i > 0; i--) {
    suma += i;
  }
  return suma;
}  
