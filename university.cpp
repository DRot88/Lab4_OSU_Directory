#include "university.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

University::University(string n) {
  name = n;
}
/****************************************************************
** Function: addBuilding
** Description: This will add a building object to the vector 
                buildings.
****************************************************************/
void University::addBuilding(Building building) {
  buildings.push_back(&building);
}

/****************************************************************
** Function: addStudent
** Description: This will add a student object to the vector 
                students.
****************************************************************/
void University::addStudent(Student person) {
  students.push_back(&person);
}

/****************************************************************
** Function: addTeacher
** Description: This will add a teacher object to the vector 
                teachers.
****************************************************************/
void University::addTeacher(Teacher person) {
  teachers.push_back(&person);
}

/****************************************************************
** Function: printStudentInfo
** Description: This will cycle through the vector of students
                and print the information about them. The info
                will be the name, age, and gpa.
****************************************************************/
void University::printStudentInfo() {
  cout << "Student Information" << endl << endl;
  for (size_t x = 0; x < students.size(); x++) {
    cout << "Student # " << x+1 << endl << endl;
    cout << "Name: " << students[x]->getName() << endl;
    cout << "Age: " << students[x]->getAge() << endl;
    cout << "GPA: " << students[x]->getGPA() << endl << endl;
  }
}

/****************************************************************
** Function: printTeacherInfo
** Description: This will cycle through the vector of teachers
                and print the information about them. The info
                will be the name, age, and rating.
****************************************************************/
void University::printTeacherInfo() {
  cout << "Instructor Information" << endl << endl;
  for (size_t x = 0; x < teachers.size(); x++) {
    cout << "Instructor # " << x+1 << endl << endl;
    cout << "Name: " << teachers[x]->getName() << endl;
    cout << "Age: " << teachers[x]->getAge() << endl;
    cout << "Rating: " << teachers[x]->getRating() << endl << endl;
  }
}

/****************************************************************
** Function: printBuildingInfo
** Description: This will cycle through the vector of buildings
                and print the information about them. The info
                will be the name, size, and address.
****************************************************************/

void University::printBuildingInfo() {
  cout << "Building Information" << endl << endl;
  for (size_t x = 0; x < buildings.size(); x++) {
    cout << "Building # " << x+1 << endl << endl;
    cout << "Name: " << buildings[x]->getName() << endl;
    cout << "Size: " << buildings[x]->getSize() << " sqft" << endl;
    cout << "Address: " << buildings[x]->getAddress() << endl << endl;
  }
}

/****************************************************************
** Function: printAllPeople
** Description: This will call the printTeacherInfo and
                printStudentInfo methods to print all of the 
                people in the University.
****************************************************************/

void University::printAllPeople() {
  printTeacherInfo();
  printStudentInfo();
}

int University::getNumOfBuildings() {
  numOfBuildings = buildings.size();
  return numOfBuildings;
}

int University::getNumOfPeople() {
  numOfPeople = students.size() + teachers.size();
  return numOfPeople;
}

int University::getNumOfStudents() {
  numOfStudents = students.size();
  return numOfStudents;
}

int University::getNumOfTeachers() {
  numOfTeachers = teachers.size();
  return numOfTeachers;
}

/****************************************************************
** Function: getStudentList
** Description: This will cycle through the vector of students
                and print the only their name.
****************************************************************/
void University::getStudentList() {
  for (size_t x = 0; x < students.size(); x++) {
    cout << "Student # " << x + 1 << ": " << students[x]->getName() << endl;
  }
}

/****************************************************************
** Function: getTeacherList
** Description: This will cycle through the vector of teachers
                and print the only their name.
****************************************************************/
void University::getTeacherList() {
  for (size_t x = 0; x < teachers.size(); x++) {
    cout << "Instructor # " << x + 1 << ": " << teachers[x]->getName() << endl;
  }
}
