#include "student.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Student::Student(string n, int a, double gpa) : People(n, a) {
  GPA = gpa;
};

void Student::do_work(int x) {
  cout << this->getName() << " did " << (x % 40) + 1 << " hours of homework." << endl << endl;
  return;
}

double Student::getGPA() {
  return GPA;
}