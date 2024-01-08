#include <iostream>

class Box {
 public:
  Box(double length = 0.0, double breadth = 0.0, double height = 0.0) : length_{length}, breadth_{breadth}, height_{height} {} 
  double length() const { return length_; }
  double breadth() const { return breadth_; }
  double height() const { return height_; }
  bool operator==(const Box& otro) const;
  friend std::ostream& operator<<(std::ostream& output, const Box& box);  
  friend std::istream& operator>>(std::istream& input, Box& box);
 private:
  double length_;
  double breadth_;
  double height_;
};
