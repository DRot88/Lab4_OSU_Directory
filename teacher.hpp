#ifndef TEACHER_HPP
#define TEACHER_HPP
#include "person.hpp"
// #include <string>

class Teacher : public Person {
  private:
    double rating;
  public:
    // Teacher constructor
    Teacher(string n, int a, double r);

    virtual void do_work(int x);
};

#endif