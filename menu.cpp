#include <iostream>
#include <fstream>
using namespace std;

// write to file (save)
void save(){
  ofstream fout;
  fout.open("output.txt");
  if (fout.fail()){
    cout << "Please make sure that output.txt is included in the folder." << endl;
    exit(1);
  }
  fout << name << endl;
  fout << partner << ages << Cooking_sense << Social_skills << Curiosity << Intelligence << Artistic_sense << Academic_performance << Competitiveness << endl;
  fout.close();
	
  cout << "*******************" << endl;
  cout << "Successfully saved!" << endl;
  cout << "*******************" << endl;
}


// read from file (load/ start)
void start(){
  ifstream fin;
  fin.open("output.txt");
  if (fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  
   
  fin >> name >> partner >> ages >> Cooking_sense >> Social_skills >> Curiosity >> Intelligence >> Artistic_sense >> Academic_performance >> Competitiveness;
  fin.close();
}

void restart(){
  
}

int exit(){
  cout << "Exiting. Welcome to continue next time!" << endl;
  cout << "               _______________________ " << endl;
  cout << "     =    =    | Exiting. Welcome to  |" << endl;
  cout << "     ^____^    |_continue next time!!_|" << endl;
  cout << "      \__/     /" << endl;
  return 1;
}

void DrawMenu(){
  cout << " ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆" << endl;
  cout << "|                      Life Simulation                      |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                           Save                            |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                          Restart                          |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit Game                         |" << endl;
  cout << "|                                                           |" << endl;
  cout << "|                         Exit Menu                         |" << endl;
  cout << "|                                                           |" << endl;	
  cout << "|      *Please type the option that you want to choose*     |" << endl;
  cout << " ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆" << endl;
  cout << "                                       Designer: Zaria, Wadi" << endl;
		
}

int main(){
	DramMenu();
	string choice;
	cin >> choice;
	while (choice!="Start" && choice!="Save" && choice !="Restart" && choice!="Exit"){
		cout <<""<<endl;
		cout << "Please type the option that you want to choose<<endl;}
	if (choice=="Save"){
		save();}
	if (choice=="Restart"){
		restart();}
	if (choice=="Exit Menu"){}
	if (choice=="Exit Game"){}
		exit();}
		
	    
