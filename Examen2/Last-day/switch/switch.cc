#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Mal" << std::endl;
    return 1;
  }
  std::string cadena = argv[1];
  for (char& caracter : cadena) {
    if (std::isalpha(caracter)) {
      if ('a' <= caracter && caracter <= 'z') {
        caracter = caracter + ('A' - 'a');
      } else if ('A' <= caracter && caracter <= 'Z') {
	caracter = caracter - ('A' - 'a');
      }
    }
  }
  std::cout << cadena << std::endl;
  return 0;
}

