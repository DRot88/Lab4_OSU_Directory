#include "university.hpp"
#include <string>
using std::string;

University::University(string n, int numBuildings, int numPeople) {
  name = n;
  numOfBuildings = numBuildings;
  numOfPeople = numPeople;
}