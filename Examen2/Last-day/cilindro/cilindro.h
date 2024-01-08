#ifndef CILINDRO_H
#define CILINDRO_H

class Cilindro {
 public: 
  Cilindro(double altura = 0.0, double radio = 0.0) : altura_{altura}, radio_{radio} {}
  double GetAltura() const { return altura_; }
  double GetRadio() const { return radio_; }
  double Area();
  double Volumen();
 private:
  double altura_;
  double radio_;
};

#endif // CILINDRO_H
