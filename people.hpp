#ifndef PEOPLE_HPP
#define PEOPLE_HPP
#include <string>
using std::string;

class People {
  private:
    string name;
    int age;
  public:
    People(string n, int a);
    virtual string getName();
    virtual int getAge();
};

#endif