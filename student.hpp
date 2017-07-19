#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "person.hpp"
#include <string>
using std::string;

class Student : public People {
  private:
    double GPA;
  public:
    //Student Constructor
    Student(string n, int a, double gpa);
    virtual void do_work(int x);
    double getGPA();
};

#endif