#include "person.hpp"

//constructor
People::People(string n, int a) {
  name = n;
  age = a;
}

string People::getName() {
  return name;
}

int People::getAge() {
  return age;
}