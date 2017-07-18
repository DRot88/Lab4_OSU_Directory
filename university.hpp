#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include <string>
using std::string;

class University {
  private:
    string name;
    int numOfBuildings;
    int numOfPeople;
  public:
    University(string n, int numBuildings, int numPeople);
    void printBuildingInfo();
    void printPeopleInfo();
};


#endif