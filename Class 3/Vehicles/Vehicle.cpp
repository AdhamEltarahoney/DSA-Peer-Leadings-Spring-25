#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : owner(""), years_old(-1) {}

Vehicle::Vehicle(std::string owr, int y_old) : owner(owr), years_old(y_old) {}

void Vehicle::print_info() {
  std::cout << "Owner: " << owner << std::endl;
  std::cout << "Years old: " << years_old << std::endl;
}