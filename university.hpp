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
    int numOfStudents;
    int numOfTeachers;
    vector<Building*> buildings;
    vector<Student*> students;
    vector<Teacher*> teachers;
    friend class Menu;
  public:
    University(string n);
    void addBuilding(Building);
    void addStudent(Student);
    void addTeacher(Teacher);
    void printBuildingInfo();
    void printStudentInfo();
    void printTeacherInfo();
    void printAllPeople();
    int getNumOfBuildings();
    int getNumOfPeople();
    int getNumOfStudents();
    int getNumOfTeachers();
    void getStudentList();
    void getTeacherList();
};


#endif