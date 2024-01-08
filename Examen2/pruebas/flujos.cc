#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::string palabra;
  std::string input;
  std::getline(std::cin, input);
  std::istringstream stream(input);
  while (stream >> palabra) {
   std::cout << palabra;
  }
  return 0;
}
