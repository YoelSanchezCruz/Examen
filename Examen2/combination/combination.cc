#include <iostream>
#include <string>

void Combinacion(const std::string& cadena1, const std::string& cadena2) {
  int longitud{};
  if (cadena1.size() > cadena2.size()) {
    longitud = cadena2.size();
  } else if (cadena1.size() < cadena2.size()) {
    longitud = cadena1.size();
  } else {
    longitud = cadena1.size();
  }
  for (int i = 0; i < longitud; i++) {
    std::cout << cadena1[i] << cadena2[i];
  }
  std::cout << std::endl;
}

int main() {
  std::string cadena1, cadena2;
  std::cout << "Introduzca la primera cadena: ";
  std::cin >> cadena1;
  std::cout << "Introduzca la segunda cadena: ";
  std::cin >> cadena2;
  Combinacion(cadena1, cadena2);
  return 0;
}
