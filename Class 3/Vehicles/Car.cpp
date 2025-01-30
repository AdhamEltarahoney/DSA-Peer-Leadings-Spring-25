#include "Car.h"
#include <iostream>

Car::Car() : Vehicle("", -1), model(""), miles_driven(-1) {}

Car::Car(std::string owr, int y_old, std::string modl, double m_driven)
    : Vehicle(owr, y_old), model(modl), miles_driven(m_driven) {}

void Car::print_info() {
  Vehicle::print_info();
  std::cout << "Model: " << model << std::endl;
  std::cout << "Miles driven: " << miles_driven << std::endl;
}
