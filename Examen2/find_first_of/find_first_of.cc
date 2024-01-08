#include <iostream>
#include <string>

int Comprobar(const std::string& cadena, char caracter) {
  for(int i = 0; i < cadena.size(); i++) {
    if (cadena[i] == caracter) {
      return i;
    }
  }
  return -1;
}

int main() {
  std::string cadena;
  std::cout << "Introduzca la cadena: ";
  std::cin >> cadena;
  char caracter{};
  std::cout << "Y un caracter: ";
  std::cin >> caracter;
  int posicion = Comprobar(cadena, caracter);
  std::cout << "La posicion es: " << posicion << std::endl;
  return 0;
}
