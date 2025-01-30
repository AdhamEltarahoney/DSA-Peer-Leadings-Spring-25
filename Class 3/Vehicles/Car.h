#ifndef CAR
#define CAR

#include "Vehicle.h"
#include <string>

class Car : public Vehicle {
public:
  Car();
  Car(std::string owr, int yold, std::string modl, double m_driven);
  virtual void print_info();
  void setMileDriven(double miles_driven) { this->miles_driven = miles_driven; }

protected:
  std::string model;
  double miles_driven;
};

#endif