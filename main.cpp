#include "building.hpp"
#include "people.hpp"
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
  University OSU("Oregon State University");
  menu.setUniversity(&OSU);

  // create instances of students, teachers, buildings
  Student s1("Daniel Rotenberg", 29, 4.0);
  Student s2("Clara Collazo", 30, 3.8);
  Student s3("Justin Haas", 27, 3.3);
  Teacher t1("Luyao Zhang", 35, 5.0);
  Teacher t2("Tim Alcon", 45, 4.5);
  Building b1("Austin Hall", 107613, "2751 SW Jerfferson Way");
  Building b2("Milne Computer Center", 23441, "1800 SW Campus Way");

  // add Students to University
  OSU.addStudent(s1);
  OSU.addStudent(s2);
  OSU.addStudent(s3);
  
  // add Teachers to University
  OSU.addTeacher(t1);
  OSU.addTeacher(t2);

  // add Buildings to University
  OSU.addBuilding(b1);
  OSU.addBuilding(b2);

  //Display the Start Menu
  menu.displayMenu();

  return 0;
}