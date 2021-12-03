#include <iostream>
#include <fstream>
#include <vector>
#include "menu.h"

using namespace std;



// write to file (save)
void save(){
  ofstream fout;
  fout.open("output.txt");
  if (fout.fail()){
    cout << "Please make sure that output.txt is included in the folder." << endl;
    exit(1);
  }
  fout << Name << endl;
  fout << gender<<endl;
	fout << images << endl;
  fout << partner << endl;
  fout <<  ages << endl;
  fout << Cooking_sense << endl;
  fout <<  Social_skills <<endl;
  fout << Curiosity << endl;
  fout <<  Intelligence <<endl;
  fout <<  Artistic_sense << endl;
  fout <<  Academic_performance <<endl;
  fout <<  Competitiveness << endl;
  fout << fchild << endl;
  fout << mchild << endl;

  for (int i=0; i < child.size(); i++){
	fout << child[i].gender << endl;
	fout << child[i].birth_year << endl;
  }

  fout.close();

	cout << "" << endl;
  cout << "*******************" << endl;
  cout << "Successfully saved!" << endl;
  cout << "*******************" << endl;
	cout << "" << endl;
}

void load(){
  ifstream fin;
  fin.open("output.txt");
  if (fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  fin >> Name;
  fin >> gender;
	fin >> images;
  fin >> partner;
  fin >>  ages;
  fin >> Cooking_sense;
  fin >>  Social_skills;
  fin >> Curiosity;
  fin >> Intelligence;
  fin >>  Artistic_sense;
  fin >>  Academic_performance;
  fin >>  Competitiveness;
  fin >> fchild;
  fin >> mchild;
  for (int i= 0; i < (fchild+mchild); i++){
	Children c;
	fin >> c.gender >> c.birth_year;
	child.push_back(c);
  }
	fin.close();
}

void Restart(int &count, int &restart){
	ifstream fin;
  fin.open("restart.txt");
  if (fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  fin >> Name;
  fin >> gender;
  fin >> partner;
  fin >>  ages;
  fin >> Cooking_sense;
  fin >>  Social_skills;
  fin >> Curiosity;
  fin >> Intelligence;
  fin >>  Artistic_sense;
  fin >>  Academic_performance;
  fin >>  Competitiveness;
  for (int i= 0; i < (fchild+mchild); i++){
	Children c;
	fin >> c.gender >> c.birth_year;
	child.push_back(c);
  }
	fin.close();
  restart=0;
}

void exitgame(int &count){
	ages==10000;
  cout << "Exiting. Welcome to continue next time!" << endl;
  cout << "               _______________________ " << endl;
  cout << "     =    =    | Exiting. Welcome to  |" << endl;
  cout << "     ^ __ ^    |_continue next time!!_|" << endl;
  count = 1;
}


void DrawMenu(){
  cout << " ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆☆-☆-☆-☆-☆-☆-" << endl;
  cout << "|    ------------------Life Simulation------------------    |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                           Save                            |" << endl;
  cout << "|                                                           |" << endl;
	cout << "|                           Load                            |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                          Restart                          |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit_Game                         |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit_Menu                         |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|      *Please type the option that you want to choose:*    |" << endl;
  cout << " ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆☆-☆-☆-☆-☆-☆-☆-" << endl;
  cout << "                                       Designer: Zaria, Wadi" << endl;

}
