#include <iostream>

int main() {
  double lado1{}, lado2{}, lado3{};
  std::cout << "Introduzca los lados del triangulo: ";
  std::cin >> lado1 >> lado2 >> lado3;
  if ((lado1 + lado2) < lado3 || (lado2 + lado3) < lado1 || (lado1 + lado3) < lado2) {
    std::cout << "Triangulo invalido" << std::endl;
    return 1;
  }
  if (lado1 == lado2 == lado3) {
    std::cout << "Es un triangulo equilatero" << std::endl;
  } else if ((lado1 == lado2 && lado1 != lado3) | (lado2 == lado3 && lado2 != lado1)) {
    std::cout << "Es un triangulo iscoseles" << std::endl;
  } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
    std::cout << "Es un triangulo escaleno" << std::endl;
  }
  return 0;
}
