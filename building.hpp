#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>
using std::string;

class Building {
  private:
    string name;
    double size;
    string address;
  public:
    Building(string n, double s, string a);
    void setName(string n);
    void setSize(double s);
    void setAddress(string a);
};

#endif