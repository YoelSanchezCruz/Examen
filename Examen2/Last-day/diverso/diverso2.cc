#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int numero{};
  std::cin >> numero;
  std::vector<int> numeros;
  while (numero > 0) {
    int digito{};
    digito = numero % 10;
    numeros.emplace_back(digito);
    numero /= 10;
  }
  int maximo = *std::max_element(numeros.begin(), numeros.end());
  int minimo = *std::min_element(numeros.begin(), numeros.end());
  std::cout << "Maximo: " << maximo << " Minimo: " << minimo << std::endl;
  return 0;
}
