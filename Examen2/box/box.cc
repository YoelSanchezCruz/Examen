#include "box.h"

bool Box::operator==(const Box& otro) const {
  return (length_ == otro.length_ && breadth_ == otro.breadth_ && height_ == otro.height_);
} 

std::ostream& operator<<(std::ostream& output, const Box& box) {
  output << "{" << box.length_ << ", " << box.breadth_ << ", " << box.height_ << "}";
  return output;
}

std::istream& operator>>(std::istream& input, Box& box) {
  input >> box.length_ >> box.breadth_ >> box.height_;
  return input;
}
