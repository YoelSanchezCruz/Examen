#include <iostream>
#include "cilindro.h"

int main() {
  double altura, radio;
  std::cout << "Altura y radio";
  std::cin >> altura >> radio;
  Cilindro cilindro{altura, radio};
  double area = cilindro.Area();
  double volumen = cilindro.Volumen();
  std::cout << "Area: " << area << " Volumen: " << volumen << std::endl;
  return 0;
}
