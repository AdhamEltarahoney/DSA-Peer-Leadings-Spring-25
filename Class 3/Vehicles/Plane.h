#ifndef PLANE
#define PLANE

#include "Vehicle.h"

class Plane : public Vehicle {

public:
  Plane();
  Plane(std::string owr, int yold, std::string aline, int numPass);
  virtual void print_info();
  void setAirline(std::string airline) { this->airline = airline; }

protected:
  std::string airline;
  int maxNumPassengers;
};

#endif