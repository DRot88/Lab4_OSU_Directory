#include "teacher.hpp"
#include <iostream>
using std::cout;
using std::endl;

Teacher::Teacher(string n, int a, double r) : People(n, a) {
  rating = r;
}

/****************************************************************
** Function: do_work(int x)
** Description: This will take and int variable, and output that
                a certain instructor has graded papers for a 
                random amount of time.
****************************************************************/
void Teacher::do_work(int x) {
  cout << "Instructor " << this->getName() << " graded papers for " << (x % 40) + 1 << " hours." << endl << endl;
  return;
}

double Teacher::getRating() {
  return rating;
}