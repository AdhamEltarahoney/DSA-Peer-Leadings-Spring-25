#include "Plane.h"
#include <iostream>

Plane::Plane() : Vehicle(), airline(""), maxNumPassengers(-1){};

Plane::Plane(std::string owr, int yold, std::string aline, int numPass)

    : Vehicle(owr, yold), airline(aline), maxNumPassengers(numPass){};

void Plane::print_info() {
  Vehicle::print_info();
  std::cout << "Airline: " << airline << std::endl;
  std::cout << "Max number of Passengers" << maxNumPassengers << std::endl;
}