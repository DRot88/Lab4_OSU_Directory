#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include "building.hpp"
#include "people.hpp"
#include "student.hpp"
#include "teacher.hpp"
#include <string>
#include <vector>
using std::string;
using std::vector;

class University {
  private:
    string name;
    int numOfBuildings;
    int numOfPeople;
    vector<Building*> buildings;
    vector<Student*> students;
    vector<Teacher*> teachers;
  public:
    University(string n);
    void addBuilding(Building);
    void addStudent(Student);
    void addTeacher(Teacher);
    void printBuildingInfo();
    void printStudentInfo();
    void printTeacherInfo();
    void printAllPeople();
};


#endif