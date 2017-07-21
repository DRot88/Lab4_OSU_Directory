#include "student.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Student::Student(string n, int a, double gpa) : People(n, a) {
  GPA = gpa;
};

/****************************************************************
** Function: do_work(int x)
** Description: This will take and int variable, and output that
                a certain student has done homework for a random 
                amount of time.
****************************************************************/
void Student::do_work(int x) {
  cout << this->getName() << " did " << (x % 40) + 1 << " hours of homework." << endl << endl;
  return;
}

double Student::getGPA() {
  return GPA;
}