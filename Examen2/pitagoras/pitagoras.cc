#include <iostream>

bool Pitagoras(const int lado1, const int lado2, const int lado3) {
  return (lado1 * lado1) + (lado2 * lado2) == (lado3 * lado3);
}

int main() {
  int lado1{}, lado2{}, lado3{};
  std::cout << "Introduzca los lados del triangulo(a² + b² = c²): ";
  std::cin >> lado1 >> lado2 >> lado3;
  if (Pitagoras(lado1, lado2, lado3)) {
    std::cout << "Es un trio pitagorico" << std::endl;
  } else {
    std::cout << "No es un trio pitagorico" << std::endl;
  }
  return 0;
}

