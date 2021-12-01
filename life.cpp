#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <life.h>
using namespace std;

int Social_skills = 0, Curiosity = 0, Intelligence = 0,Artistic_sense = 0; Academic_performance = 0, Competitiveness = 0;

int random(int min, int max){
  srand(time(NULL));
  // generate a random int within [min, max]
  int random = rand()%(max-min+1)+min;
  return random;
}

void Playing_with_friends (){
  social_skills += random(5, 10);
}

void Watching_TV(){
  Curiosity += 10;
  Academic_performance -= random(0-5);
}

void Reading (){
  Intelligence += random(5, 10);
  Academic_performance += random(5, 10);
}

void Cultivating_hobbies (){
  Artistic_sense += 10;
}

void Playing_computer (){
  Academic_performance -= random(5, 10);
  Intelligence += random(0, 5);
}

void Studying (){
  Academic_performance += random(15, 20);
}

void Writing () {
  Artistic_sense += 10;
  
}

void Internship (){
  Competitiveness += random(10, 15);
}

void Competition (){
  Competitiveness += random(5, 10);
  Intelligence += random(5, 10);
  Academic_performance += random(0, 5);
}

void Hall_activities (){
  Social_skills += random(10, 15);
  Artistic_sense += random(5, 10);
}

void Parties(){
  Social_skills += random(10, 15);
  Academic_performance -= random(5, 10);
  Competitiveness -= random(0, 5);
}

void bad_performance(){
  cout << "Your grades drop due to indugling in entertainment." << endl;
  cout << "Your parents are unhappy and forbid you to play computer games or watch TV." << endl;
  cout << "(You are not allowed to choose these two option in the next round)";
}
