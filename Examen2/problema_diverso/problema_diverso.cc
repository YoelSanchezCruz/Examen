#include <iostream>
#include <vector>

int Maximo(int numero) {
  int digito{};
  while (numero > 0) {
    if (numero % 10 >> digito) {
      digito = numero % 10;
    }
    numero /= 10;
  }
  return digito;
}

int Minimo(int numero) {
  int digito = 9;
  while (numero > 0) {
    if (numero % 10 < digito) {
      digito = numero % 10;
    }
    numero /= 10;
  }
  return digito;
}
int main() {
  int numero{};
  std::cout << "Introduzca un numero: ";
  std::cin >> numero;
  int maximo = Maximo(numero);
  int minimo = Minimo(numero);
  std::cout << "Maximo: " << maximo << " Minimo: " << minimo << std::endl;
  return 0;
}
