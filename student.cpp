#include "student.hpp"
#include <string>
using std::string;

Student::Student(string n, int a, double gpa) : Person(n, a) {
  GPA = gpa;
};

void Student::do_work(int x) {
  return;
}