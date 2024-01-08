#ifndef BOX_H
#define BOX_h

#include <iostream>

class Box {
 public: 
  Box(double altura = 0.0, double ancho = 0.0, double largo = 0.0) : altura_{altura}, ancho_{ancho}, largo_{largo} {}
  double GetAltura() const { return altura_; }
  double GetAncho() const { return ancho_; }
  double GetLargo() const { return largo_; }
  double Suma();
  bool operator==(const Box& otro) const;
  friend std::ostream& operator<<(std::ostream& output, const Box& box);
  friend std::istream& operator>>(std::istream& input, Box& box);
 private:
  double altura_;
  double ancho_;
  double largo_;
};

#endif // BOX_H
