#include <iostream>

class Box {
 public:
  Box(int largo = 0, int ancho = 0, int alto = 0) : largo_{largo}, ancho_{ancho}, alto_{alto} {}
  int largo() const { return largo_; }
  int ancho() const { return ancho_; }
  int alto() const { return alto_; }
  bool operator==(const Box& otro) const;
  friend std::ostream& operator<<(std::ostream& output, const Box& box);
  friend std::istream& operator>>(std::istream& input, Box& box);
 private:
  int largo_;
  int ancho_;
  int alto_;
};

