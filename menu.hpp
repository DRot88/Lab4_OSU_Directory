#ifndef MENU_HPP
#define MENU_HPP
#include "university.hpp"

class Menu {
  private:
    University *uniPtr;
  public:
    Menu();
    void displayMenu();
    void setUniversity(University *univ);
};

#endif