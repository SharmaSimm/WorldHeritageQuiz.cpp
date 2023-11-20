/*********************
heritage1.cpp is the main driver of a World Heritage Quiz program in C++, featuring a menu-driven interface for selecting and answering questions.
It integrates with the Heritage class to manage quiz functionality and user scores. 
This file demonstrates essential C++ concepts like user input handling, control flow with switch-case, and class usage.

********************/

#include "main.cpp"

int main(){
  
  Heritage h;
  int points;
  char choice;

  // Menu driven program
  do{
    cout << "Menu: " << endl;
    cout << "1. World Heritage Question 1" << endl;
    cout << "2. World Heritage Question 2" << endl;
    cout << "3. World Heritage Question 3" << endl;
    cout << "4. World Heritage Question 4" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice){
      case '1':
        h.question1();
        break;
      case '2':
        h.question2();
        break;
      case '3':
        h.question3();
        break;
      case '4':
        h.question4();
        break;
      case '5':
        break;
      default:
        cout << "Invalid option!" << endl;
    }
    points = h.getPoints();
    cout << "Your total points are: " << points << endl;
  }while(choice != '5');

  return 0;
}
