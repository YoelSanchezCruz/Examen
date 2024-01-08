#include "box.h"

double Box::Suma() {
  return altura_ + ancho_ + largo_;
}

bool Box::operator==(const Box& otro) const {
  return (altura_ == otro.altura_ && ancho_ == otro.ancho_ && largo_ == otro.largo_);
}

std::ostream& operator<<(std::ostream& output, const Box& box) {
  output << box.altura_ << ", " << box.ancho_ << ", " <<  box.largo_;
  return output;
}

std::istream& operator>>(std::istream& input, Box& box) {
  input >> box.altura_ >> box.ancho_ >> box.largo_;
  return input;
}
