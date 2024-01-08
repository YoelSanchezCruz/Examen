#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

double Area(const double lado) {
  return (std::sqrt(3) * lado * lado) / 4;
}

int main() {
  double lado{};
  std::cout << "Introduzca el lado del triangulo: ";
  std::cin >> lado;
  double area = Area(lado);
  std::cout << "El area del triangulo es: " << std::fixed << std::setprecision(4) << area << std::endl;
  return 0;
}
