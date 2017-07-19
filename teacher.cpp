#include "teacher.hpp"

Teacher::Teacher(string n, int a, double r) : People(n, a) {
  rating = r;
}

void Teacher::do_work(int x) {
  return;
}

double Teacher::getRating() {
  return rating;
}