#include <iostream>
#include <string>
#include <cstdlib>
#include <life.h>
#include <time.h>

using namespace std;
int partner=0, ages=22, Cooking_sense=0, Social_skills = 0, Curiosity = 0, Intelligence = 0, Artistic_sense = 0, Academic_performance = 0, Competitiveness = 0, fchild=0, mchild=0;
string gender, Name;

void phase1(){
 time_t now = time(0);
 char* dt = ctime(&now);
 cout << "In " << dt << ", you are born." << endl;
 // choosing activities
 cout << "In the process of growing up, you may participate in various activities." << endl;
 cout << "Please note that there is only one chance per year to choose from the following activities:" << endl;
 cout << "Playing with other children" << endl;
 cout << "Watching TV" << endl;
 cout << "Reading" << endl;
 string activity;
 for (int i=1; i<=6; i++){
  cout << "You are " << i << " years old now! Please choose an activities to enrich life." << endl;
  cout << "Playing with other children" << endl;
  cout << "Watching TV" << endl;
  cout << "Reading" << endl;
  cin >> activity;
  if (activity == "Playing with other children"){
   Playing_with_friends();
  }
  if (activity == "Watching TV"){
   Watching_TV();
  }
  if (activity == "Reading"){
   Reading();
  }
  else{
   cout << "Please choose the given activities." << endl;
  }
 }
}

void phase2(){
 cout << "You are now at the age of going for the primary school." << endl;
 string activity;
 for (int i=7; i<=12; i++){
  cout << "You are " << i << " years old now! You may choose an activities as extracurricular activities." << endl;
  if (Academic_performance >= -10){
   cout << "Cultivating a hobby" << endl;
   cout << "Playing with friends" << endl;
   cout << "Watching TV" << endl;
   cout << "Reading" << endl;
   cout << "Playing computer games" << endl;
  }
  else{
   cout << "Cultivating a hobby" << endl;
   cout << "Playing with friends" << endl;
   cout << "Reading" << endl;
  }
  cin >> activity;
  if (activity == "Cultivating a hobby"){
   Cultivating_hobbies();
  }
  if (activity == "Playing with friends"){
   Playing_with_friends();
  }
  if (activity == "Watching TV"){
    if (Academic_performance >= -10){
      Watching_TV();
      if (Academic_performance < -10){
        bad_performance();
      }
    }
    else{
      cout "You cannot choose this option, please choose again." << endl;
      i-=1;
    }
  }
  if (activity == "Reading"){
   Reading();
  }
  if (activity == "Playing computer games"){
    if (Academic_performance >= -10){
       Playing_computer();
       if (Academic_performance < -10){
         bad_performance();
       }
     }
     else{
       cout << "You cannot choose this option, please choose again." << endl;
       i-=1;
     }
   }
  }
}

void phase3(){
  cout << " " << endl;
  string activity;
  for (int i=13; i<=18; i++){
    cout << "You are " << i << " years old now! You may choose following activities as an extracurricular activities." << endl;
    if (Academic_performance >= -10){
      cout << "Studying" << endl;
      cout << "Cultivating a hobby" << endl;
      cout << "Playing with friends" << endl;
      cout << "Reading" << endl;
      cout << "Writing" << endl;
      cout << "Watching TV" << endl;
      cout << "Playing computer games" << endl;
    }
    else{
      cout << "Studying" << endl;
      cout << "Cultivating a hobby" << endl;
      cout << "Playing with friends" << endl;
      cout << "Reading" << endl;
      cout << "Writing" << endl;
    }
    cin >> activity;
    if (activity == "Studying"){
      Studying();
    }
    if (activity == "Cultivating a hobby"){
      Cultivating_hobbies();
    }
    if (activity == "Playing with friends"){
      Playing_with_friends();
    }
    if (activity == "Reading"){
      Reading();
    }
    if (activity == "writing"){
      Writing();
    }
    if (activity == "Watching TV"){
      if (Academic_performance >= -10){
        Watching_TV();
        if (Academic_performance < -10){
          bad_performance();
        }
      }
      else{
        cout << "You cannot choose this option, please choose again." << endl;
        i-=1;
      }
    }
    if (activity == "Playing computer games"){
      if (Academic_performance >= -10){
        Playing_computer();
        if (Academic_performance < -10){
          bad_performance();
        }
      }
      else{
        cout << "You cannot choose this option, please choose again." << endl;
        i-=1;
      }
    }
  }
}


void phase4(){
  string major, activity_1, activity_2;
  if (Academic_performance >= 100){
    cout << "After graduating from high school, you enter a top University with excellent grades."<< endl;
    cout << "You decide to major in:" << endl;
    cout << "(Please choose from the following majors)" << endl;
    cout << "IBGM   MBBS   Business   Social_Science   Arts   Science";
    cin >> major;
    while (major != "IBGM" && major != "MBBS" && major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science"){
      cout << "There is no such major, please input again." << endl;
      cout << "You decide to major in: ";
      cin >> major;
      cout << endl;
    }
    cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
  }
  if (Academic_performance >= 80 && Academic_performance < 100){
    cout << "After graduating from high school, you enter a top University with excellent grades."<< endl;
    cout << "You decide to major in:" << endl;
    cout << "(Please choose from the following majors)" << endl;
    cout << "Business   Social_Science   Arts   Science";
    cin >> major;
    while (major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science"){
      cout << "There is no such major, please input again." << endl;
      cout << "You decide to major in: ";
      cin >> major;
      cout << endl;
    }
    cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
  }
  if (Academic_performance >= 50 && Academic_performance < 80){
    cout << "After graduating from high school, you enter a normal University."<< endl;
    cout << "You decide to major in:" << endl;
    cout << "(Please choose from the following majors)" << endl;
    cout << "Business   Social_Science   Arts   Science";
    cin >> major;
    while (major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science"){
      cout << "There is no such major, please input again." << endl;
      cout << "You decide to major in: ";
      cin >> major;
      cout << endl;
    }
    cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
  }
  if (Academic_performance < 50){
    cout << "Sorry to inform that you don't get any offer from the university due to the substandard academic performance." << endl;
  }
  cout << "After going to  university, you have more free time and decide to focus on two things every year to improve yourself." << endl;
  for (int i=1; i <=4; i++){
    cout << "Now, you are a year " << i << " student， please choose two of the following activities to participate." << endl;
    cout << "Studying  Internship  Competition  Hall_activities  Go_to_parties" << endl;
    cout << "activity 1: ";
    cin >> activity_1;
    cout << endl;
    cout << "activity 2: ";
    cin >> activity_2;
    cout << endl;
    if (activity_1 == "Studying" || activity_2 == "studying"){
      Studying();
    }
    if (activity_1 == "Internship" || activity_2 == "Internship"){
      Internship();
    }
    if (activity_1 == "Competition" || activity_2 == "Competition"){
      Competition();
    }
    if (activity_1 == "Hall_activities" || activity_2 == "Hall_activities"){
      Hall_activities();
    }
    if (activity_1 == "Go_to_parties" || activity_2 == "Go_to_parties"){
      Parties();
    }
    else{
      cout << "You cannot choose this option, please choose again." << endl;
    }
  }
}


void phase5(){
string yourjob;
cout << "Happy Graduation!!!"<<endl;
cout << "Now, you could determine your future career path."<<endl;
yourjob = Career();
cout << "You are now a " << yourjob;
cout << "Starting from 22, you could arrange an item for yourself every year."<<endl;
cout << "From entertainment to part-time, from developing interests to meeting your partner,"<<endl;
cout << "you may determine freely."<<endl;
cout << "You may meet your partner randomly every year,"<<endl;
cout << "remember that time is limited in this game."<<endl;
cout << "You can only form families before 40,"<<endl;
cout << "and you will end your life at 65."<<endl;
cout << "Treasure your time and start your life!"<<endl;
for (ages=22;ages<66;ages++){
 srand(time(NULL));
 int min = 0, max = 5;
 int rannn = rand()%(max-min+1)+min;
 if (gender=="F"){
 if (rannn==3){
 Femalepartner();}}
 if (gender=="M"){
 if (rannn==3){
 Malepartner();}}
 cout << "You are now " << ages;
 if (ages==30){
 cout << "Congradualations! You have done a great job, you have now became the senior "<< yourjob << ", well done and keep going!";}
 if (ages==38){
 cout << "Congradualations! You have done a great job, you have now became the manager, go on!";}
 if (ages==50){
 cout << "Congradualations! You have done a great job, you have now became the preseident, you have finally attained some achievements in career now!";}
 if (ages==55){
 cout << "You have became the consultant and mainly give people advices!";}
 if (ages==60){
 cout << "You finally feel tired and decided to retire from your work!";}
 char action;
 action="lalala";
 for (action!="Entertainment"| action!="Part time"| action!="Family"|action!="Interest classes" ){
   cout << "You can commit one of the following actions"<<endl;
   cout << "Entertainment"<<endl;
   cout << "Part time"<<endl;
   cout << "Family"<<endl;
   cout << "Interest classes"<<endl;
   cout << "Please type your action:"<<endl;
   cin >> action;}
 if (action=="Entertainment"){
  char entertainmentaction;
  entertainmentaction="lalala"
  for (entertainmentaction!="Cinema"| entertainmentaction!="Library"| entertainmentaction!="Room excape"|entertainmentaction!="Theme park" ){
   cout << "You can commit one of the following actions"<<endl;
   cout << "Cinema"<<endl;
   cout << "Library"<<endl;
   cout << "Room excape"<<endl;
   cout << "Theme park"<<endl;
   cout << "Please type your action:"<<endl;
   cin >> entertainmentaction;}
   if (entertainmentaction=="Cinema"){
   cout << "You enjoy a very great film and feel relaxed" <<endl;
   Artistic_sense+=5;}
   if (entertainmentaction=="Library"){
   cout << "You learn much today" <<endl;
   Intelligence+=5;}
   if (entertainmentaction=="Room excape"){
   cout << "You feel really curious in designing a room escape game on your own!" <<endl;
   Curiosity+=5;}
   if (entertainmentaction=="Theme park"){
   cout << "It is really exciting, and you enjoy a really great time with you friend in Ocean park." <<endl;
   Social_skills +=5;}}
 if (action=="Part time"){
  char parttimeaction;
  parttimeaction="lalala"
  for (parttimeaction!="Author"| parttimeaction!="Travellor"| parttimeaction!="Photographer"|parttimeaction!="Sales" ){
   cout << "You can commit one of the following actions"<<endl;
   cout << "Author"<<endl;
   cout << "Travellor"<<endl;
   cout << "Photographer"<<endl;
   cout << "Sales"<<endl;
   cout << "Please type your action:"<<endl;
   cin >> parttimeaction;}
   if (parttimeaction=="Author"){
   cout << "You find out that you becomes more creative." <<endl;
   Artistic_sense+=3;
   Curiosity+=3}
   if (parttimeaction=="Photographer"){
   cout << "You find out that you have better artistic sense." <<endl;
   Artistic_sense+=5;}
   if (parttimeaction=="Travellor"){
   cout << "You feel really curious in exploring more about the world." <<endl;
   Curiosity+=5;}
   if (parttimeaction=="Sales"){
   cout << "You go to the bar with the clients. You find out that you are more familiar with socializing." <<endl;
   Social_skills +=5;}}
   
 if (action=="Interest classes"){
  char interestaction;
  interestaction="lalala"
  for (interestaction!="Programming"| interestaction!="Cooking"| interestaction!="Creative writing"|interestaction!="Ceramics" ){
   cout << "You can commit one of the following actions"<<endl;
   cout << "Programming"<<endl;
   cout << "Ceramics"<<endl;
   cout << "Cooking"<<endl;
   cout << "Creative writing"<<endl;
   cout << "Please type your action:"<<endl;
   cin >> interestaction;}
   if (interestaction=="Ceramics"){
   cout << "You love the mug that you have made." <<endl;
   Artistic_sense+=5;
   Curiosity+=3}
   if (interestaction=="Cooking"){
   cout << "You have tried your own speghetti. It tastes great!" <<endl;
   Cooking_sense+=5;}
   if (interestaction=="Programming"){
   cout << "You become more and more familiar with c++." <<endl;
   Intelligence+=5;}
   if (interestaction=="Creative writing"){
   cout << "You have more and more ideas in writing." <<endl;
   Curiosity+=10;}}
   
 if (action=="Family"){
  char familyaction;
  familyaction="lalala"
  for (familyaction!="Parents"| familyaction!="Partner"| familyaction!="Children/Child"){
   cout << "You can commit one of the following actions"<<endl;
   cout << "Parents"<<endl;
   if (Partner==1){
   cout << "Date"<<endl;
   cout << "Have a baby"<<endl;}
   if (Child>=1){
   cout << "Children/Child"<<endl;}
   cout << "Please type your action:"<<endl;
   cin >> familyaction;}
   if (familyaction=="Parents"){
   cout << "You love spending time with your mum and dad." <<endl;}
   if (familyaction=="Date"){
   Date();}
   if (familyaction=="Have a baby"){
   cout << "Let's have a child together!" <<endl;
   int rannd = (int) rand() / (RAND_MAX+8);
   if (rannd == 3){
   fchild +=1;
   cout << "Congradualations! You get a baby girl!"}
   if (rannd ==4){
   mchild +=1;
   cout << "Congradualations! You get a baby boy!"}}
   if (familyaction=="Children/Child"){
   cout << "You enjoy great time with your kids!" <<endl;}
   }
   }
   cout << "You are now 65 years old."<<endl;
   cout <<" You have came to the end of your life."<<endl;
   cout << "Hope that you all get a fruitful life"<<endl;
   cout << "Welcome to start the game again to gain another life!"<<endl;
}

void image1(){
cout << "1"<<endl;
cout << "HHHHHHHHHHHH"<<endl;
cout << "HH O HH O HH"<<endl;
cout << "HH   II   HH"<<endl;
cout << "HH   ..   HH"<<endl;
cout << "HH        HH"<<endl;
}

void image2(){
cout << "2"<<endl;
cout << "VVVVVVVVVVVV"<<endl;
cout << "VV VV VV VVV"<<endl;
cout << "VV 0 VV 0 VV"<<endl;
cout << "VV   @    VV"<<endl;
cout << "VVV      VVV"<<endl;
}

void image3(){
cout << "3"<<endl;
cout << "-----~------"<<endl;
cout << "---$---$----"<<endl;
cout << "   --^--    "<<endl;
cout << "    -V-     "<<endl;
cout << "     -      "<<endl;
}

void Femalepartner(){
int min = 0;
int max = 4;
int word = rand() % (max - min + 1) + min
string partnername;
if (word==0){
partnername="Peter";}
if (word==1){
partnername="Leo";}
if (word==2){
partnername="Jacky";}
if (word==3){
partnername="William";}
if (word==4){
partnername="Harry";}


int min = 0;
int max = 4;
int word = rand() % (max - min + 1) + min
string job;
if (word==0){
job="Nurse.";}
if (word==1){
job="Software engineer.";}
if (word==2){
job="Lawyer.";}
if (word==3){
job="Flight attendant.";}
if (word==4){
job="Writer.";}

cout << "Hi" << Name << ", I am " << partnername << endl;
cout << "I am a " << job <<endl;
cout << "I love you! Please be my girlfriend!" << endl;
char YESNO;
YESNO="NIL";
for (YESNO!="Yes"| YESNO!="No"){
  cout << "Please type Yes for accepting, and No for rejecting!"<<endl;
  cin >> YESNO;}
if (YESNO=="Yes"){
Partner+=1;}
}

void Malepartner(){
int min = -1, max = 5;
srand(time(NULL));
int word = rand()%(max-min+1)+min;
if (word==0){
partnername="Lily";}
if (word==1){
partnername="Amy";}
if (word==2){
partnername="Snow";}
if (word==3){
partnername="Macy";}
if (word==4){
partnername="Ana";}


int jobs = rand()%(max-min+1)+min;
string job;
if (jobs==0){
job="Doctor.";}
if (jobs==1){
job="Civil engineer.";}
if (jobs==2){
job="Lawyer.";}
if (jobs==3){
job="Pilot.";}
if (jobs==4){
job="Writer.";}

cout << "Hi" << Name << ", I am " << partnername << endl;
cout << "I am a " << job <<endl;
cout << "Would you like to be my boyfriend?" << endl;
char YESNO;
YESNO="NIL";
for (YESNO!="Yes"| YESNO!="No"){
  cout << "Please type Yes for accepting, and No for rejecting!"<<endl;
  cin >> YESNO;}
if (YESNO=="Yes"){
Partner+=1;}
}

void Date(){
if (wordings==0){
"Let's go to cinema!"}
if (wordings==1){
"I love you so much! Honey~"}
if (wordings==2){
"I have booked this restaurant, let's go together."}
if (wordings==3){
"You want a son or a daughther?"}
if (wordings==4){
"I would like to go Hawaii"}
}

string Career(){
cout << "Please choose from the following jobs/further studies"<<endl;
if (Academic_performance >= 200 && Intelligence >= 60){
cout << "Ph.D" <<endl;}
if (Academic_performance >= 150 && Intelligence >= 40){
cout << "MA" << endl;}
if (Social_skills >=50){
cout << "Insurance Sales" <<endl}
if (Social_skills >=50 && Competitiveness >=40 && Academic_performance >=160){
cout << "Investment banking front office" << endl}
if (Intelligence >=50 && Academic_performance >=100){
cout <<"Programming" <<endl;}
if (Curiosity =10 && Intelligence >=40){
cout <<"Online Game Design" <<endl;}

cout <<"Waiter/Waitress"<<endl;
cout <<"Artist"<<endl;
cout <<"Writer"<<endl;
cout <<"Journalist"<<endl;
cout <<"Circus performers"<<endl;
cout <<"Basketball player"<<endl;
cout <<"Journalist"<<endl;

cout << "Please type the job you would like to choose:"<<endl;
cin >> yourjob;
return yourjob;
}




int main(){
cout << "Welcome to Life Simulation！" << endl;
cout << "In this game, you can determine the role’s life by making choices. From family to career, from entertainment to life long learning, live a unique life in every turn.!";
cout << "If you would like to call the menu, save or load the game, please type MENU and enter.";
cout << "Now, please choose a name for yourself.";
cin >> Name;
cout << "Now, please choose your gender. Choose Female by typing F. Choose Male by typing M." << endl;
cin >> gender;
if (gender != "F" | gender != "M"){
 cout << "Choose Female by typing F. Choose Male by typing M." << endl;
 cin >> gender;}
cout <<"Now, lets look at the faces:" << endl;
int images;
images= 4;
if ( images!=1 || images !=2 || images!=3 ){
  image1();
  image2();
  image3();
  cout << "Please choose your face!"<<endl;
  cin >> images;
cout <<"There is another important thing, anytime you would like to call the menu, please type MENU. In the menu, you could Start, Save, Restart or Exit the game"<<endl;
Phase1();
Phase2();
Phase3();
Phase4();
Phase5();}
}
 
 
