#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Mal" << std::endl;
    return 1;
  }
  int numero1 = atoi(argv[1]);
  double numero2 = atof(argv[2]);
 /* std::string cadena = argv[1];
  for (char& caracter : cadena) {
    if (std::isalpha(caracter)) {
      if ('a' <= caracter && caracter <= 'z') {
        caracter = caracter + ('A' - 'a');
      } else if ('A' <= caracter && caracter <= 'Z') {
	caracter = caracter - ('A' - 'a');
      }
    }
  }*/

  std::cout << numero1 << " " << numero2 << std::endl;
  return 0;
}

