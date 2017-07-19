#include "menu.hpp"
#include "university.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

Menu::Menu() {
  return;
}

void Menu::displayMenu() {
  int choice;
  cout << "\nWelcome to the Oregon State University Directory!" << endl << endl;
  cout << "1: Print information for all of the buildings" << endl;
  cout << "2: Print information for all of our students and faculty" << endl;
  cout << "3: Choose a person to do work" << endl;
  cout << "4: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";
  cin >> choice;

  switch(choice) {
    case 1 :
      cout << "\nBelow is a list of our " << uniPtr->getNumOfBuildings();
      cout << " buildings and all of their information: " << endl << endl;
      uniPtr->printBuildingInfo();
      break;
    case 2 :
      cout << "\nBelow is a list of the information regarding our " << uniPtr->getNumOfStudents();
      cout << " students and " << uniPtr->getNumOfTeachers() << " faculty members: " << endl << endl;
      uniPtr->printAllPeople();
      break;
    case 3 :
      workMenu();
      break;
    case 4 :
      cout << "Exiting the program." << endl << endl;
      break;
    default :
      cout << "Invalid choice, exiting the program." << endl << endl;
  }

}

void Menu::setUniversity(University * univ) {
  uniPtr = univ;
}

void Menu::workMenu() {
  int choice;
  cout << "\n1: Students" << endl;
  cout << "2: Instructors" << endl << endl;
  cout << "Who would you like to do work (Please choose from the options above): ";
  cin >> choice;

  switch (choice) {
    case 1 :
        int studentNum;
        cout << endl;
        uniPtr->getStudentList();
        cout << "\nSelect what # student you would like to do work: ";
        cin >> studentNum;
        for (int x = 0; x < uniPtr->students.size(); x++) {
          if (studentNum == x+1) {
            Student worker = *uniPtr->students[x];
            worker.do_work(x);
          }
        }
      break;
    case 2 :
        int instructorNum;
        cout << endl;
        uniPtr->getTeacherList();
        cout << "\nSelect what # instructor you would like to do work: ";
        cin >> instructorNum;
        for (int x = 0; x < uniPtr->teachers.size(); x++) {
          if (instructorNum == x+1) {
            Teacher worker = *uniPtr->teachers[x];
            worker.do_work(x);
          }
        }        
      break;
    default :
      cout << "Invalid choice, exiting the program." << endl << endl; 
  }
  return;
}