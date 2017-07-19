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
    virtual void do_work(int x) = 0;
    virtual string getName();
    virtual int getAge();
};

#endif