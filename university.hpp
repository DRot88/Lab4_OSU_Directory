#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

class University {
  private:
    const string name = "Oregon State University";
    int numOfBuildings;
    int numOfPeople;
  public:
    void printBuildingInfo();
    void printPeopleInfo();
};


#endif