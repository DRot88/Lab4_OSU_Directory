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

  Student s1("Daniel Rotenberg", 29, 4.0);
  Teacher t1("Luyao Zhang", 35, 5.0);
  Building b1("Austin Hall", 107613, "2751 SW Jerfferson Way");
  Building b2("Milne Computer Center", 23441, "1800 SW Campus Way");

  OSU.addStudent(s1);
  OSU.addTeacher(t1);

  OSU.printStudentInfo();
  OSU.printTeacherInfo();



  return 0;
}