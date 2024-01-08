#include <iostream>
#include "switch_case.h"

bool Comprobar_letra(char caracter) {
  if (isalpha(caracter)) {
    return true;
  } else {
    return false;
  }
}   

void Cambiar_letra(char& caracter) {
  if ('A' <= caracter && caracter <= 'Z') {
    caracter = caracter + 32;
  } else if ('a' <= caracter && caracter <= 'z') {
    caracter = caracter - 32;
  }
}
