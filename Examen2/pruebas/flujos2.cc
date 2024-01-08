#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::string linea;
  std::string frase;
  char caracter;
  std::string palabra;
  std::istringstream iss(input);
  iss >> palabra;
  std::cout << palabra << std::endl;
  std::cout << input;
  return 0;
}
