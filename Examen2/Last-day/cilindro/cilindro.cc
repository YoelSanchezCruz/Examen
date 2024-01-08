#include "cilindro.h"
#include <cmath>

double Cilindro::Area() {
  return (2 * M_PI * radio_ * altura_ + 2 * M_PI * radio_ * radio_);
}

double Cilindro::Volumen() {
  return (M_PI * radio_ * radio_ * altura_);
}
