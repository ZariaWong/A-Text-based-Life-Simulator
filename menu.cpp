#include <iostream>
#include <fstream>
#include <vector>
#include <menu.h>

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
  fout << partner << endl;
  fout << partner << endl;
  fout <<  ages << endl;
  fout << Cooking_sense << endl;
  fout <<  Social_skills <<endl; 
  fout << Curiosity << endl;
  fout <<  Intelligence <<endl;
  fout <<  Artistic_sense << endl;
  fout <<  Academic_performance <<endl;
  fout <<  Competitiveness << endl;
  for (int i=0; i < child.size(); i++){
	fout << child[i].gender << endl;
	fout << child[i].birth_year << endl;
  }
  fout.close();

  cout << "*******************" << endl;
  cout << "Successfully saved!" << endl;
  cout << "*******************" << endl;
}

void exitmenu(){
  ifstream fin;
  fin.open("output.txt");
  if (fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  fin >> Name >> partner >> ages >> Cooking_sense >> Social_skills >> Curiosity >> Intelligence >> Artistic_sense >> Academic_performance >> Competitiveness;
  for (int i= 0; i < (fchild+mchild); i++){
	Children c;
	fin >> c.gender >> c.birth_year;
	child.push_back(c);
  }
  fin.close();
}

void restart(){
  partner = 0, ages = 0, Cooking_sense = 0, Social_skills = 0, Curiosity = 0, Intelligence = 0, Artistic_sense = 0, Academic_performance = 0, Competitiveness = 0, fchild = 0, mchild = 0;
  string Name = "";
  char gender = ' ';
}

void exitgame(int &count){
  cout << "Exiting. Welcome to continue next time!" << endl;
  cout << "               _______________________ " << endl;
  cout << "     =    =    | Exiting. Welcome to  |" << endl;
  cout << "     ^ __ ^    |_continue next time!!_|" << endl;
  count = 1;
}

void DrawMenu(){
  cout << " â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-ââ-â-â-â-â-â-" << endl;
  cout << "|    ------------------Life Simulation------------------    |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                           Save                            |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                          Restart                          |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit Game                         |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit Menu                         |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|      *Please type the option that you want to choose:*    |" << endl;
  cout << " â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-â-ââ-â-â-â-â-â-â-" << endl;
  cout << "                                       Designer: Zaria, Wadi" << endl;

}

