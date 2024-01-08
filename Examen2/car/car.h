#include <string>
#include <iostream>

class Car {
 public:
  Car(std::string model = {}, std::string plate = {}, int kilometers = {}) : model_{model}, plate_{plate}, kilometers_{kilometers} {}
  std::string model() const { return model_; }
  std::string plate() const { return plate_; }
  int kilometers() const { return kilometers_; }
  bool operator>(const Car& otro) const;
  bool operator<(const Car& otro) const;
  bool operator==(const Car& otro) const;
  friend std::ostream& operator<<(std::ostream& output, const Car& car);
  friend std::istream& operator>>(std::istream& input, Car& car);
 private:
  std::string model_;
  std::string plate_;
  int kilometers_;
};
