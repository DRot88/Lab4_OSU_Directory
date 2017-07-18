#include "building.hpp"

//Building Constructor
Building::Building(string n, double s, string a) {
  name = n;
  size = s;
  address = a;
}

void Building::setName(string n) {
  name = n;
}

void Building::setSize(double s) {
  size = s;
}

void Building::setAddress(string a) {
  address = a;
}