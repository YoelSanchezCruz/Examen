#include "subcadena.h"

bool Subcadena(const std::string& cadena1, const std::string& cadena2) {
  return (cadena1.find(cadena2) != std::string::npos);
}
