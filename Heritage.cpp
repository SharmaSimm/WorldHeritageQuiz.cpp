/**************
This file defines the Heritage class with functions to present quiz questions and manage user responses.
Key features include constructors for initializing quiz states, methods for asking heritage-related questions, and a scoring system based on correct answers.
The class demonstrates basic C++ programming, including object-oriented design, user input handling, and conditional logic.  
*************/

#include "main.cpp"
#include <string>


Heritage::Heritage(){
  total_points = 0;
  answer = "";
}

Heritage::Heritage(int points, string ans){
  total_points = points;
  answer = ans;
}

Heritage::~Heritage(){
  
}

void Heritage::question1(){
  cout << "What is the longest river in the world?" << endl;
  cin >> answer;
  if(answer == "Nile"){
    total_points += 1;
  }
  else {
    cout << "Wrong answer!" << endl;
  }
}

void Heritage::question2(){
  cout << "What is the name of the ancient city located in modern day Italy?" << endl;
  cin >> answer;
  if(answer == "Rome"){
    total_points += 1;
  }
  else {
    cout << "Wrong answer!" << endl;
  }
}

void Heritage::question3(){
  cout << "What is the name of the ancient city located in modern day Egypt?" << endl;
  cin >> answer;
  if(answer == "Alexandria"){
    total_points += 1;
  }
  else {
    cout << "Wrong answer!" << endl;
  }
}

void Heritage::question4(){
  cout << "What is the capital city of India? " << endl;
  cin >> answer;
  if(answer == "Delhi"){
    total_points += 1;
  }
  else {
    cout << "Wrong answer!" << endl;
  }
}

int Heritage::getPoints(){
  return total_points;
}

void Heritage::setPoints(int points){
  total_points = points;
}
