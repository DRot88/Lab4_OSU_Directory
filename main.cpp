#include "building.hpp"
#include "person.hpp"
#include "student.hpp"
#include "teacher.hpp"
#include "university.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  Menu menu;
  menu.displayMenu();
  University OSU("Oregon State University", 10, 500);



  return 0;
}