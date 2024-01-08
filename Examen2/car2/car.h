#include <iostream>

class Car {
 public:
  Car(std::string model = {}, std::string plate = {}, int kilometers = 0) : model_{model}, plate_{plate}, kilometers_{kilometers} {}
  std::string GetModel() const { return model_; }
  std::string GetPlate() const { return plate_; }
  int GetKilometers() const { return kilometers_; }
  bool operator>(const Car& otro) const;
  bool operator==(const Car& otro) const;
  friend std::ostream& operator<<(std::ostream& salida, const Car& car);
  friend std::istream& operator>>(std::istream& entrada, Car& car);
 private:
  std::string model_;
  std::string plate_;
  int kilometers_;
};
