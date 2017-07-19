#include "university.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

University::University(string n) {
  name = n;
}

void University::addBuilding(Building building) {
  buildings.push_back(&building);
}

void University::addStudent(Student person) {
  students.push_back(&person);
}

void University::addTeacher(Teacher person) {
  teachers.push_back(&person);
}

void University::printStudentInfo() {
  cout << "Student Information" << endl << endl;
  for (int x = 0; x < students.size(); x++) {
    cout << "Student # " << x+1 << endl << endl;
    cout << "Name: " << students[x]->getName() << endl;
    cout << "Age: " << students[x]->getAge() << endl;
    cout << "GPA: " << students[x]->getGPA() << endl << endl;
  }
}

void University::printTeacherInfo() {
  cout << "Instructor Information" << endl << endl;
  for (int x = 0; x < teachers.size(); x++) {
    cout << "Instructor # " << x+1 << endl << endl;
    cout << "Name: " << teachers[x]->getName() << endl;
    cout << "Age: " << teachers[x]->getAge() << endl;
    cout << "Rating: " << teachers[x]->getRating() << endl << endl;
  }
}

void University::printBuildingInfo() {
  cout << "Building Information" << endl << endl;
  for (int x = 0; x < buildings.size(); x++) {
    cout << "Building # " << x+1 << endl << endl;
    cout << "Name: " << buildings[x]->getName() << endl;
    cout << "Size: " << buildings[x]->getSize() << " sqft" << endl;
    cout << "Address: " << buildings[x]->getAddress() << endl << endl;
  }
}

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

void University::getStudentList() {
  for (int x = 0; x < students.size(); x++) {
    cout << "Student # " << x + 1 << ": " << students[x]->getName() << endl;
  }
}

void University::getTeacherList() {
  for (int x = 0; x < teachers.size(); x++) {
    cout << "Instructor # " << x + 1 << ": " << teachers[x]->getName() << endl;
  }
}
