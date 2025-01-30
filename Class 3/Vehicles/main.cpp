#include "Car.h"
#include "Plane.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

int main() {

  Plane *p1 = new Plane("Jeff", 12, "american", 56);

  Plane *p2 = new Plane();

  p1->print_info();
  std::cout << std::endl;
  p2->print_info();
  p2->setOwner("Bob");
  p2->setYearOld(15);
  p2->setAirline("Delta");

  std::cout << std::endl;

  p2->print_info();
  std::cout << std::endl;

  Car *c1 = new Car("Bob", 12, "Truck", 54924);
  c1->print_info();

  c1->setMileDriven(82349);
  std::cout << std::endl;

  c1->print_info();

  Car c2("Kevin", 14, "Jeep", 71394);
  c2.print_info();

  return 0;
}