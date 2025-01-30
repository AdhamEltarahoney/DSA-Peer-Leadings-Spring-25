#ifndef VEHICLE
#define VEHICLE

#include <string>

class Vehicle {
public:
  Vehicle();
  Vehicle(std::string owr, int y_old);
  virtual void print_info();
  void setOwner(std::string owner) { this->owner = owner; }
  void setYearOld(int year_old) { this->years_old = year_old; }

protected:
  std::string owner;
  int years_old;
};

#endif