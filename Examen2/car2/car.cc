#include "car.h"

bool Car::operator>(const Car& otro) const {
  return (kilometers_ > otro.kilometers_);
}

bool Car::operator==(const Car& otro) const {
  return (kilometers_ == otro.kilometers_);
}

std::ostream& operator<<(std::ostream& salida, const Car& car) {
  salida << "Modelo: " << car.model_ << " Matricula: " << car.plate_ << " Kilometraje: " << car.kilometers_;
  return salida;
}

std::istream& operator>>(std::istream& entrada, Car& car) {
  entrada >> car.model_ >> car.plate_ >> car.kilometers_;
  return entrada;
}
