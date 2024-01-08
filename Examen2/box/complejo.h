/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Yoel Sánchez Cruz
 * @date 3 Dic 2023
 * @brief Clase complejo con diferentes operaciones, como la suma, resta, multiplicacion y division
 **/

#include <iostream>

class Complejo {
 public:
  Complejo(double real = 0.0, double imaginario = 0.0) : real_{real}, imaginario_{imaginario} {}
  double getreal() const { return real_;}
  double getimaginario() const { return imaginario_;}
  Complejo operator+(const Complejo& otro) const;
  Complejo operator-(const Complejo& otro) const;
  Complejo operator*(const Complejo& otro) const;
  Complejo operator/(const Complejo& otro) const;
  friend std::ostream& operator<<(std::ostream& output, const Complejo& complejo);
  friend std::istream& operator>>(std::istream& imput, Complejo& complejo);

 private:
  double real_;
  double imaginario_;
};
