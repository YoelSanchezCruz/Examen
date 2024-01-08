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

#include "complejo.h"

/* @brief Devuelve la suma de los numeros complejos
 * @param Recibe los numeros complejos introducidos por el usuario
 * @return Devuelve la suma de ambos numeros
*/
Complejo Complejo::operator+(const Complejo& otro) const {
  return Complejo(real_ + otro.real_, imaginario_ + otro.imaginario_);
}

/* @brief Devuelve la resta de los numeros complejos
 * @param Recibe los numeros complejos introducidos por el usuario
 * @return Devuelve la resta de ambos numeros
*/
Complejo Complejo::operator-(const Complejo& otro) const {
  return Complejo(real_ - otro.real_, imaginario_ - otro.imaginario_);
}

/* @brief Multiplica los numeros complejos
 * @param Recibe los numeros complejos introducidos por el usuario
 * @return Devuelve la multiplicacion de ambos numeros
*/
Complejo Complejo::operator*(const Complejo& otro) const {
  return Complejo(
    real_ * otro.real_ - imaginario_ * otro.imaginario_,
    real_ * otro.imaginario_ + imaginario_ * otro.real_
  );
}

/* @brief Divide los numeros complejos
 * @param Recibe los numeros complejos introducidos por el usuario
 * @return Devuelve la division de ambos numeros
*/
Complejo Complejo::operator/(const Complejo& otro) const {
  double denominador = otro.real_ * otro.real_ + otro.imaginario_ * otro.imaginario_;
  if (denominador == 0) {
    return Complejo(0, 0);
  }
  return Complejo(
    (real_ * otro.real_ + imaginario_ * otro.imaginario_) / denominador,
    (imaginario_ * otro.real_ - real_ * otro.imaginario_) / denominador
  );
}

/* @brief Permite escribir los numeros complejos
 * @param Recibe la entrada del usuario y la clase complejos
 * @return Devuelve el numero complejo
*/
std::ostream& operator<<(std::ostream& output, const Complejo& complejo) {
  output << complejo.real_;
  if (complejo.imaginario_ >= 0) {
    output << " + " << complejo.imaginario_ << "i";
  } else {
    output << " - " << -complejo.imaginario_ << "i";
  }
  return output;
}

/* @brief Permite recoger los numeros complejos
 * @param Recibe la entrada del usuario y la clase complejos
 * @return Devuelve el numero complejo
*/
std::istream& operator>>(std::istream& imput, Complejo& complejo) {
  char signo;
  imput >> complejo.real_ >> signo >> complejo.imaginario_;
  if (signo == '-') {
    complejo.imaginario_ = -complejo.imaginario_;
  }
  return imput;
}
