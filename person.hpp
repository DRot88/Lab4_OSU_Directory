#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
using std::string;

class Person {
  private:
    string name;
    int age;
  public:
    Person(string n, int a);
    virtual void do_work(int x) = 0;
};

#endif