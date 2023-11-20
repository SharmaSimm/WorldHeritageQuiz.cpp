/*********************
main.cpp contains the definition of the Heritage class, a key component of a World Heritage Quiz program in C++. 
The class includes private members for tracking points and user answers, along with a set of public methods. 
Features include default and parameterized constructors, a destructor, and functions for presenting individual quiz questions.
Additionally, it provides methods to get and set the user's total points. This class forms the core of the quiz functionality, 
showcasing basic C++ class design, member functions, and encapsulation.

*********************/

#include <iostream>
#include <string>

using namespace std;

//#ifndef HERITAGE
//#define HERITAGE

class Heritage {
  
  // Private instance class member
  int total_points;
  string answer;
  
  public:
    // Default Constructor
    Heritage();
    // Parameterized Constructor
    Heritage(int, string);
    // Define Destructor
    ~Heritage();

    // Public members - function prototypes
    void question1();
    void question2();
    void question3();
    void question4();
    int getPoints();
    void setPoints(int);
};

//#endif

//#ifndef HERITAGE_H
//#define HERITAGE
