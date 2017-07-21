#ifndef TEACHER_HPP
#define TEACHER_HPP
#include "people.hpp"
// #include <string>

class Teacher : public People {
  private:
    double rating;
  public:
    // Teacher constructor
    Teacher(string n, int a, double r);
    void do_work(int x);
    double getRating();
};

#endif