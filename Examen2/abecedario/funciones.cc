#include "abecedario.h"
#include "string"

std::string CadenaCambiada(const std::string cadena) {
  std::string resultado = cadena;
  for (char& caracter : resultado) {
    if (std::isalpha(caracter)) {
      if (caracter == 'z') {
        caracter = 'a';
      } else if (caracter == 'Z') {
        caracter = 'A';
      } else {
        caracter++;
      }
    }
  }
  return resultado;
}

    
