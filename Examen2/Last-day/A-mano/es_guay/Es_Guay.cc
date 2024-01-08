#include "Es_Guay.h"

bool EsGuay(int numero) {
  int contador{1};
  int suma{};
  while (numero > 0) {
    if (contador % 2 != 0) {
      suma += numero % 10;
    }
    contador++;
    numero /= 10;
  }
  return (suma % 2 == 0);
}
