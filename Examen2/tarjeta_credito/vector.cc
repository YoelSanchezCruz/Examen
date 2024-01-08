#include <iostream>
#include <vector>

int main() {
  std::vector<int> primervector;
  int elemento{};
  std::cout << "Ingrese los elementos del primer vector: ";
  while (std::cin >> elemento) {
    primervector.emplace_back(elemento);
  }
  for (int i = 0; i < primervector.size(); i++) {
    std::cout << primervector[i] << ' ';
  }
  std::cout << std::endl;
  return 0;
}
