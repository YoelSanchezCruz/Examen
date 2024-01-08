#include <iostream>

int EsGuay(int numero) {
  int posicion{1};
  int suma{};
  while (numero > 0) {
    if ((posicion % 2) != 0) {
      suma += numero % 10;
    }
    numero /= 10;
    posicion++;
  }
  return suma;
}  

int main() {
  int numero{};
  std::cin >> numero;
  int suma = EsGuay(numero);
  if (suma % 2 != 0) {
    std::cout << "no es guay" << std::endl;
  } else {
    std::cout << "Es guay" << std::endl;
  }
  return 0;
}
