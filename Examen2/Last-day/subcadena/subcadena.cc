#include <iostream>
#include <string>

bool Subcadena(const std::string& cadena, const std::string& subcadena) {
  return (cadena.find(subcadena) != std::string::npos);
}

int main() {
  std::string cadena, subcadena;
  std::cin >> cadena >> subcadena;
  if (Subcadena(cadena, subcadena)) {
    std::cout << "Si es subcadena" << std::endl;
  } else { 
    std::cout << "No es subcadena" << std::endl;
  }
  return 0;
}
