#include <iostream>
#include <string>
#include <sstream>

std::string Acronimo(const std::string& linea) {
  std::string palabra;
  std::string acronimo;
  char letra;
  std::stringstream frase(linea);
  while(frase >> palabra) {
    letra = std::toupper(palabra[0]);
    acronimo += letra;
  }
  return acronimo;
}

int main() {
  std::string linea{};
  std::getline(std::cin, linea);
  std::string acronimo = Acronimo(linea);
  std::cout << acronimo << std::endl;
  return 0;
}
