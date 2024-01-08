#include <iostream>
#include <string>

int Compare(const std::string& cadena1, const std::string& cadena2) {
  return (cadena1.compare(cadena2));
}

int main() {
  std::string cadena1, cadena2;
  std::cin >> cadena1 >> cadena2;
  if (Compare(cadena1, cadena2) < 0) {
    std::cout << "Cadena uno precede" << std::endl;
  } else if (Compare(cadena1, cadena2) > 0) {
    std::cout << "Cadena dos precede" << std::endl;
  } else {
    std::cout << "Son iguales" << std::endl;
  }
  return 0;
}
