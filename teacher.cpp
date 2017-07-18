#include "teacher.hpp"

Teacher::Teacher(string n, int a, double r) : Person(n, a) {
  rating = r;
}

void Teacher::do_work(int x) {
  return;
}