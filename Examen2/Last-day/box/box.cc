#include "box.h"

bool Box::operator==(const Box& otro) const {
  return (largo_ == otro.largo_ && ancho_ == otro.ancho_ && alto_ == otro.alto_);
}

std::ostream& operator<<(std::ostream& output, const Box& box) {
  output << box.largo_ << '/' << box.ancho_ << '/' << box.alto_;
  return output;
}

std::istream& operator>>(std::istream& input, Box& box) {
  input >> box.largo_ >> box.ancho_ >> box.alto_;
  return input;
}
