#include "building.hpp"

//Building Constructor
Building::Building(string n, double s, string a) {
  name = n;
  size = s;
  address = a;
}

void Building::setName(string n) {
  this->name = n;
}

void Building::setSize(double s) {
  this->size = s;
}

void Building::setAddress(string a) {
  this->address = a;
}

string Building::getName() {
  return this->name;
}

double Building::getSize() {
  return this->size;
}

string Building::getAddress() {
  return this->address;
}