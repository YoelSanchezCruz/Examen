#include <iostream>

int Maximo(int numero) {
  int maximo{};
  while (numero > 0) {
    if ((numero % 10) > maximo) {
      maximo = numero % 10;
    }
    numero /= 10;
  }
  return maximo;
}

int Minimo(int numero) {
  int minimo{9};
  while (numero > 0) {
    if ((numero % 10) < minimo) {
      minimo = numero % 10;
    }
    numero /= 10;
  }
  return minimo;
}

int main() {
  int numero{};
  std::cin >> numero;
  int maximo = Maximo(numero);
  int minimo = Minimo(numero);
  std::cout << "Maximo: " << maximo << " Minimo: " << minimo << std::endl;
  return 0;
}
