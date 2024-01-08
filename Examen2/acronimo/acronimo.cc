#include <iostream>
#include <string>
#include <sstream>

std::string Acronimo(const std::string& frase) {
  std::stringstream ss(frase);
  std::string palabra;
  std::string acronimo;
  while(ss >> palabra) {
    char inicial = std::toupper(palabra[0]);
    acronimo += inicial;
  }
  return acronimo;
}

int main() {
  std::string frase;
  std::cout << "Introduzca la frase: ";
  std::getline(std::cin, frase);
  std::string acronimo = Acronimo(frase);
  std::cout << acronimo << std::endl;
  return 0;
}
