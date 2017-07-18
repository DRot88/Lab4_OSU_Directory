#include "menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Menu::Menu() {
  return;
}

void Menu::displayMenu() {
  int choice;
  cout << "\nWelcome to the Oregon State University Directory!" << endl << endl;
  cout << "1: Print information for all of the buildings." << endl;
  cout << "2: Print information for all of our students and faculty." << endl;
  cout << "3: Choose a person to do work." << endl;
  cout << "4: Exit." << endl << endl;
  cout << "Please choose from one of the above options: ";
  cin >> choice;

  switch(choice) {
    case 1 :
      cout << "Below is a list of all of our building information: " << endl << endl;
      break;
    case 2 :
      cout << "Below is a list of the information regarding our students and faculty: " << endl << endl;
      break;
    case 3 :
      //TODO ADD A SECOND MENU FOR THIS OPTION
      break;
    case 4 :
      cout << "Exiting the program." << endl << endl;
      break;
    default :
      cout << "Invalid choice." << endl << endl;
  }

}