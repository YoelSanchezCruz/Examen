#include "numero_guay.h"

bool Es_guay(int numero) {
  int suma_digitos{};
  int posicion{1};
  while (numero > 0) {
    int digito = numero % 10;
    if (posicion % 2 != 0) {
      suma_digitos += digito;
    }
    numero /= 10;
    posicion++;
  }
  return suma_digitos % 2 == 0;
}
