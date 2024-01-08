#include "car.h"

bool Car::operator>(const Car& otro) const {
  return (kilometers_ > otro.kilometers_);
}

bool Car::operator<(const Car& otro) const {
  return (kilometers_ < otro.kilometers_);
}

bool Car::operator==(const Car& otro) const {
  return (kilometers_ == otro.kilometers_);
}

std::ostream& operator<<(std::ostream& output, const Car& car) {
  output << "Modelo: " << car.model_ << " Matricula: " << car.plate_ << " Kilometros: " << car.kilometers_;
  return output;
}

std::istream& operator>>(std::istream& input, Car& car) {
  input >> car.model_ >> car.plate_ >> car.kilometers_;
  return input;
}
