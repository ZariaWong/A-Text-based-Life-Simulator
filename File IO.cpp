#include <fstream>
using namespace std;

// write to file (save)

void save(){
  ofstream fout;
  fout.open("output.txt");
  if (fout.fail()){
    cout << "Error in file openning!" << endl;
    exit(1);
  }
  fout << name << endl;
  
  fout.close();
}


// read from file (load/ start)
void start(){
  ifstream fin;
  fin.open("output.txt");
  if (fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  fin >> 
  fin.close();
}
