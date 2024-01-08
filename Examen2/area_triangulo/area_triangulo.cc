#include <iostream>
#include <cmath>
#include <iomanip>

double Area(const int lado) {
  return std::sin(M_PI / 3) * lado * lado / 2;
}

int main() {
  int lado{};
  std::cout << "Introduzca el lado del triangulo equilatero: ";
  std::cin >> lado;
  double area = Area(lado);
  std::cout << "El area es: " << std::fixed << std::setprecision(4) << area << std::endl;
  return 0;
}
