#include <iostream>
#include <string>

void Subcadena(const std::string& cadena, const int posicion, const int caracteres) {
  for (int i = posicion - 1; i < (posicion + caracteres) - 1; i++) {
    std::cout << cadena[i];
  }
  std::cout << std::endl;
}

int main() {
  std::string cadena;
  int posicion{}, caracteres{};
  std::cout << "Introduzca una cadena: ";
  std::cin >> cadena;
  std::cout << "Introduzca la posicion y el numero de caracteres de la subcadena que sacaremos de la original: ";
  std::cin >> posicion >> caracteres;
  Subcadena(cadena, posicion, caracteres);
  return 0;
}
