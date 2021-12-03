#include <iostream>
#include <string>
#include <time.h>
#include "menu.h"
#include <stdlib.h>
#include <vector>
#include "life.h"
using namespace std;

int partner = 0, ages = 0, Cooking_sense = 0, Social_skills = 0, Curiosity = 0, Intelligence = 0, Artistic_sense = 0, Academic_performance = 0, Competitiveness = 0, fchild = 0, mchild = 0;
string Name;
string yourjob;
char gender,images;
int count = 0; // sign of exiting game
int restart = 0; // sign of restart

vector<Children> child;



// The Menu will be called at the end of every year
void Menu(){
	DrawMenu();
	string choice;
	cin >> choice;
	while (choice!="Exit_Game" && choice!="Save" && choice !="Restart" && choice!="Exit_Menu" && choice!="Load"){
		cout <<""<<endl;
		cout << "Please type the option that you want to choose"<<endl;}
	if (choice=="Save"){
		save();}
	if (choice=="Restart"){
		Restart(count, restart);}
	if (choice =="Load"){
		load();
	}
	if (choice=="Exit_Menu"){
		return;
	}
	if (choice=="Exit_Game"){
		exitgame(count);}
	}


// The functions of Femalepartner and Malepartner will be used to generate random partner in phase 5
void Femalepartner() {
	  int min = 0, max = 4;
		srand(time(NULL));
    int word = rand()%(max-min+1)+min;
    string partnername;
    if (word == 0) {
        partnername = "Peter";
    }
    if (word == 1) {
        partnername = "Leo";
    }
    if (word == 2) {
        partnername = "Jacky";
    }
    if (word == 3) {
        partnername = "William";
    }
    if (word == 4) {
        partnername = "Harry";
    }

    int jobs = rand()%(max-min+1)+min;
    string job;
    if (jobs == 0) {
        job = "Nurse.";
    }
    if (jobs == 1) {
        job = "Software engineer.";
    }
    if (jobs == 2) {
        job = "Lawyer.";
    }
    if (jobs == 3) {
        job = "Flight attendant.";
    }
    if (jobs == 4) {
        job = "Writer.";
    }

    cout << "Hi " << Name << ", I am " << partnername << endl;
    cout << "I am a " << job << endl;
    cout << "I love you! Please be my girlfriend!" << endl;
    string YESNO;
    YESNO = "NIL";
    while (YESNO != "Yes" && YESNO != "No") {
        cout << "Please type Yes for accepting, and No for rejecting!" << endl;
        cin >> YESNO;
    }
    if (YESNO == "Yes") {
        partner += 1;
	cout <<""<<endl;
    }
}

void Malepartner() {
    string partnername;
    int min = 0, max = 4;
    srand(time(NULL));
    int word = rand()%(max-min+1)+min;
    if (word == 0) {
        partnername = "Lily";
    }
    if (word == 1) {
        partnername = "Amy";
    }
    if (word == 2) {
        partnername = "Snow";
    }
    if (word == 3) {
        partnername = "Macy";
    }
    if (word == 4) {
        partnername = "Ana";
    }

		int jobs = rand()%(max-min+1)+min;
		string job;
		if (jobs == 0) {
		    job = "Doctor.";
		}
		if (jobs == 1) {
		    job = "Civil engineer.";
		}
		if (jobs == 2) {
		    job = "Lawyer.";
		}
		if (jobs == 3) {
		    job = "Pilot.";
		}
		if (jobs == 4) {
		    job = "Writer.";
		}

		cout << "Hi " << Name << ", I am " << partnername << endl;
		cout << "I am a " << job << endl;
		cout << "Would you like to be my boyfriend?" << endl;
		string YESNO;
		YESNO = "NIL";
		while (YESNO != "Yes" && YESNO != "No") {
		    cout << "Please type Yes for accepting, and No for rejecting!" << endl;
		    cin >> YESNO;
		}
		if (YESNO == "Yes") {
		    partner += 1;
			  cout << ""<<endl;
		}

}

// Below are the 3 images for players to choose from
void image1() {
    cout << "HHHHHHHHHHHH" << endl;
    cout << "HH O HH O HH" << endl;
    cout << "HH   II   HH" << endl;
    cout << "HH   ..   HH" << endl;
    cout << "HH        HH" << endl;
    cout <<""<<endl;
}

void image2() {
    cout << "VVVVVVVVVVVV" << endl;
    cout << "VV VV VV VVV" << endl;
    cout << "VV 0 VV 0 VV" << endl;
    cout << "VV   @    VV" << endl;
    cout << "VVV      VVV" << endl;
    cout <<""<<endl ;
}

void image3() {
    cout << "-----~------" << endl;
    cout << "---$---$----" << endl;
    cout << "   --^--    " << endl;
    cout << "    -V-     " << endl;
    cout << "     -      " << endl;
    cout <<""<<endl;
}

// The career function is used for chossing future path in phase 5
string Career() {
    string yourjob;
    cout << "Please choose from the following jobs/further studies" << endl;
    if (Academic_performance >= 200 && Intelligence >= 60) {
        cout << "Ph.D" << endl;
    }
    if (Academic_performance >= 150 && Intelligence >= 40) {
        cout << "MA" << endl;
    }
    if (Social_skills >= 50) {
        cout << "Insurance_Sales" << endl;
    }
    if (Social_skills >= 50 && Competitiveness >= 40 && Academic_performance >= 160) {
        cout << "Investment banking front office" << endl;
    }
    if (Intelligence >= 50 && Academic_performance >= 100) {
        cout << "Programming" << endl;
    }
    if (Curiosity = 10 && Intelligence >= 40) {
        cout << "Online_Game_Design" << endl;
    }

    cout << "Waiter/Waitress" << endl;
    cout << "Artist" << endl;
    cout << "Writer" << endl;
    cout << "Journalist" << endl;
    cout << "Circus_performers" << endl;
    cout << "Basketball_player" << endl;

    cout << "Please type the job you would like to choose:" << endl;
    cin >> yourjob;
		return yourjob;
}


// phase1: 0-6 years old
void phase1() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "In " << dt << ", you are born." << endl;
		cout << "" << endl;
    // choosing activities
    cout << "In the process of growing up, you may participate in various activities." << endl;
    cout << "Please note that there is only one chance per year to choose from the following activities:" << endl;
    cout << "Playing with other children" << endl;
    cout << "Watching TV" << endl;
    cout << "Reading" << endl;
    string activity;
    for (int i = 1; i <= 6; i++) {
				ages = i;
				cout << "" << endl;
        cout << "You are " << i << " years old now! Please choose an activities to enrich life." << endl;
				int j = 0;
				while (j == 0){
	        cout << "Playing_with_other_children" << endl;
	        cout << "Watching_TV" << endl;
	        cout << "Reading" << endl;
	        cin >> activity;
	        if (activity == "Playing_with_other_children") {
	            Playing_with_friends();
							j = 1;
	        }
	        else if (activity == "Watching_TV") {
	            Watching_TV();
							j = 1;
	        }
	        else if (activity == "Reading") {
	            Reading();
							j = 1;
	        }
	        else {
						cout << "" << endl;
	            cout << "Please choose from the given activities.^-^" << endl;
	        }
				}
    }
}

// phase2: 7-12 years old (primary school)
void phase2() {
	cout << "" << endl;
    cout << "You are now at the age of going for the primary school." << endl;
		string activity;
    for (int i = 7; i <= 12; i++) {
				ages = i;
				cout << "" << endl;
        cout << "You are " << i << " years old now! You may choose an activities as extracurricular activities." << endl;
				int j = 0;
				while(j == 0){
					if (Academic_performance >= -10) {
	            cout << "Cultivating_a_hobby" << endl;
	            cout << "Playing_with_friends" << endl;
	            cout << "Watching_TV" << endl;
	            cout << "Reading" << endl;
	            cout << "Playing_computer_games" << endl;
	        }
	        else {
	            cout << "Cultivating_a_hobby" << endl;
	            cout << "Playing_with_friends" << endl;
	            cout << "Reading" << endl;
	        }
	        cin >> activity;
	        if (activity == "Cultivating_a_hobby") {
	            Cultivating_hobbies();
							j = 1;
	        }
	        else if (activity == "Playing_with_friends") {
	            Playing_with_friends();
							j = 1;
	        }
					else if (activity == "Watching_TV") {
	            if (Academic_performance >= -10) {
	                Watching_TV();
									if (Academic_performance < -10) {
	                    bad_performance();
									}
									j = 1;
							}
	            else{
								cout <<""<< endl;
	                cout << "You cannot choose this option, becuase of your bad academic performance(;-;), please choose again." << endl;
	            }
	        }
	        else if (activity == "Reading") {
	            Reading();
							j = 1;
	        }
					else if (activity == "Playing_computer_games") {
	            if (Academic_performance >= -10) {
	                Playing_computer();
	                if (Academic_performance < -10) {
	                    bad_performance();
	                }
									j = 1;
	            }
							else{
								cout <<""<<endl;
								cout << "You cannot choose this option, becuase of your bad academic performance(;-;), please choose again." << endl;
							}
					}
	        else {
						cout << "" << endl;
	            cout << "Please choose from the given activities.^-^" << endl;
	        }
			}
		}
}


// phase3: 13-18 years old (middle school & high school)
void phase3() {
    cout << " " << endl;
		cout << "Now, you enters the middle school." << endl;
		string activity;
    for (int i = 13; i <= 18; i++) {
			  ages = i;
				cout << "" << endl;
        cout << "You are " << i << " years old now! You may choose following activities as an extracurricular activities." << endl;
				int j=0;
				while (j == 0){
					if (Academic_performance >= -10) {
	            cout << "Studying" << endl;
	            cout << "Cultivating_a_hobby" << endl;
	            cout << "Playing_with_friends" << endl;
	            cout << "Reading" << endl;
	            cout << "Writing" << endl;
	            cout << "Watching_TV" << endl;
	            cout << "Playing_computer_games" << endl;
	        }
	        else {
	            cout << "Studying" << endl;
	            cout << "Cultivating_a_hobby" << endl;
	            cout << "Playing_with_friends" << endl;
	            cout << "Reading" << endl;
	            cout << "Writing" << endl;
	        }
	        cin >> activity;
	        if (activity == "Studying") {
	            Studying();
							j = 1;
	        }
	        else if (activity == "Cultivating_a_hobby") {
	            Cultivating_hobbies();
							j = 1;
	        }
	        else if (activity == "Playing_with_friends") {
	            Playing_with_friends();
							j = 1;
	        }
	        else if (activity == "Reading") {
	            Reading();
							j = 1;
	        }
	        else if (activity == "Writing") {
	            Writing();
							j = 1;
	        }
	        else if (activity == "Watching_TV") {
	            if (Academic_performance >= -10) {
	                Watching_TV();
									if (Academic_performance < -10) {
	                    bad_performance();
									}
									j = 1;
							}
	            else{
								cout << "" << endl;
	                cout << "You cannot choose this option, becuase of your bad academic performance(;-;), please choose again." << endl;
	            }
	        }
	        else if (activity == "Playing_computer_games") {
	            if (Academic_performance >= -10) {
	                Playing_computer();
	                if (Academic_performance < -10) {
	                    bad_performance();
	                }
									j = 1;
	            }
							else{
								cout << "" << endl;
								cout << "You cannot choose this option, becuase of your bad academic performance(;-;), please choose again." << endl;
							}
					}
	        else {
						cout << "" << endl;
	             cout << "Please choose from the given activities.^-^" << endl;
	        }
				}
    }
}

// phase4: 19-22 (university)
void phase4() {
    string major, activity_1, activity_2;
		cout << "" << endl;
    if (Academic_performance >= 100) {
        cout << "After graduating from high school, you enter a top University with excellent grades." << endl;
        cout << "You decide to major in:" << endl;
        cout << "(Please choose from the following majors)" << endl;
        cout << "IBGM   MBBS   Business   Social_Science   Arts   Science";
        cin >> major;
        while (major != "IBGM" && major != "MBBS" && major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science") {
            cout << "There is no such major, please input again." << endl;
						cout << "You decide to major in: ";
            cin >> major;
						cout << endl;
        }
				cout << " " << endl;
        cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
    }
    if (Academic_performance >= 80 && Academic_performance < 100) {
        cout << "After graduating from high school, you enter a top University with excellent grades." << endl;
        cout << "You decide to major in:" << endl;
        cout << "(Please choose from the following majors)" << endl;
        cout << "Business   Social_Science   Arts   Science";
        cin >> major;
        while (major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science") {
					cout << "There is no such major, please input again." << endl;
					cout << "You decide to major in: ";
					cin >> major;
					cout << endl;
        }
        cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
    }
    if (Academic_performance >= 50 && Academic_performance < 80) {
        cout << "After graduating from high school, you enter a normal University." << endl;
        cout << "You decide to major in:" << endl;
        cout << "(Please choose from the following majors)" << endl;
        cout << "Business   Social_Science   Arts   Science";
        cin >> major;
        while (major != "Business" && major != "Social_Science" && major != "Arts" && major != "Science") {
					cout << "There is no such major, please input again." << endl;
					cout << "You decide to major in: ";
					cin >> major;
					cout << endl;
        }
				cout << "" << endl;
        cout << "Congratulations! Now you are an undergraduate majoring in " << major << "." << endl;
    }
    if (Academic_performance < 50) {
        cout << "Sorry to inform that you don't get any offer from the university due to the substandard academic performance." << endl;
				return;
		}
		cout << "" << endl;
    cout << "After going to  university, you have more free time and decide to focus on two things every year to improve yourself." << endl;
    for (int i = 1; i <= 4; i++) {
				ages += i;
				cout << "" << endl;
        cout << "Now, you are a year " << i << " student�� please choose two of the following activities to participate." << endl;
        cout << "Studying  Internship  Competition  Hall_activities  Go_to_parties" << endl;
        cout << "activity 1: ";
        cin >> activity_1;
        cout << endl;
        cout << "activity 2: ";
        cin >> activity_2;
            cout << endl;
        if (activity_1 == "Studying" || activity_2 == "studying") {
            Studying();
        }
        else if (activity_1 == "Internship" || activity_2 == "Internship") {
            Internship();
        }
        else if (activity_1 == "Competition" || activity_2 == "Competition") {
            Competition();
        }
        else if (activity_1 == "Hall_activities" || activity_2 == "Hall_activities") {
            Hall_activities();
        }
        else if (activity_1 == "Go_to_parties" || activity_2 == "Go_to_parties") {
            Parties();
        }
        else {
					cout << "" << endl;
            cout << "You cannot choose this option, please choose again." << endl;
        }
    }
}


//phase5: >22 years old (after graduation)
void phase5() {
    int menuage=0;
    string yourjob;
		cout << "" << endl;
    cout << "Happy Graduation!!!" << endl;
    cout << "Now, you could determine your future career path." << endl;
    yourjob = Career();
    cout << "" << endl;
    cout << "You are now a " << yourjob;
    cout << "Starting from 22, you could arrange an item for yourself every year." << endl;
    cout << "From entertainment to part-time, from developing interests to meeting your partner," << endl;
    cout << "you may determine freely." << endl;
    cout << "You may meet your partner randomly every year," << endl;
    cout << "remember that time is limited in this game." << endl;
    cout << "You can only form families before 40," << endl;
    cout << "and you will end your life at 65." << endl;
    cout << "Treasure your time and start your life!" << endl;
    cout << "" << endl;

    int ages = 22;
    for (ages; ages < 66; ages++) {
        srand(time(NULL));
        int min = 0, max = 5;
        int rannn = rand() % (max - min + 1) + min;
        if (gender == 'F') {
					if (partner==0){
            if (rannn == 3) {
                Femalepartner();
							}
            }
        }
        if (gender == 'M') {
					if (partner==0){
            if (rannn == 3) {
                Malepartner();
            }
					}
        }
				cout<<""<<endl;
        cout << "You are now " << ages<<endl;
        string action;
        action = "lalala";
        while (action != "Entertainment" && action != "Part_time" && action != "Family" && action != "Interest_classes") {
            cout << "You can commit one of the following actions" << endl;
            cout << "Entertainment" << endl;
            cout << "Part_time" << endl;
            cout << "Family" << endl;
            cout << "Interest_classes" << endl;
            cout << "Please type your action:" << endl;
            cin >> action;
        }
				cout <<""<<endl;
        if (action == "Entertainment") {
            string entertainmentaction;
            entertainmentaction = "lalala";
            while (entertainmentaction != "Cinema" && entertainmentaction != "Library" && entertainmentaction != "Room_excape" && entertainmentaction != "Theme_park") {
                cout << "You can commit one of the following actions" << endl;
                cout << "Cinema" << endl;
                cout << "Library" << endl;
                cout << "Room_excape" << endl;
                cout << "Theme_park" << endl;
                cout << "Please type your action:" << endl;
                cin >> entertainmentaction;
            }
            if (entertainmentaction == "Cinema") {
                cout << "You enjoy a very great film and feel relaxed" << endl;
                Artistic_sense += 5;
            }
            if (entertainmentaction == "Library") {
                cout << "You learn much today" << endl;
                Intelligence += 5;
            }
            if (entertainmentaction == "Room_excape") {
                cout << "You feel really curious in designing a room escape game on your own!" << endl;
                Curiosity += 5;
            }
            if (entertainmentaction == "Theme_park") {
                cout << "It is really exciting, and you enjoy a really great time with you friend in Ocean park." << endl;
                Social_skills += 5;
            }
        }
        if (action == "Part_time") {
            string parttimeaction;
            parttimeaction = "lalala";
            while (parttimeaction != "Author" && parttimeaction != "Travellor" && parttimeaction != "Photographer" && parttimeaction != "Sales") {
                cout << "You can commit one of the following actions" << endl;
                cout << "Author" << endl;
                cout << "Travellor" << endl;
                cout << "Photographer" << endl;
                cout << "Sales" << endl;
                cout << "Please type your action:" << endl;
                cin >> parttimeaction;
            }
            if (parttimeaction == "Author") {
                cout << "You find out that you becomes more creative." << endl;
                Artistic_sense += 3;
                Curiosity += 3;
            }
            if (parttimeaction == "Photographer") {
                cout << "You find out that you have better artistic sense." << endl;
                Artistic_sense += 5;
            }
            if (parttimeaction == "Travellor") {
                cout << "You feel really curious in exploring more about the world." << endl;
                Curiosity += 5;
            }
            if (parttimeaction == "Sales") {
                cout << "You go to the bar with the clients. You find out that you are more familiar with socializing." << endl;
                Social_skills += 5;
            }
        }

        if (action == "Interest_classes") {
            string interestaction;
            interestaction = "lalala";
            while (interestaction != "Programming" && interestaction != "Cooking" && interestaction != "Creative_writing" && interestaction != "Ceramics") {
                cout << "You can commit one of the following actions" << endl;
                cout << "Programming" << endl;
                cout << "Ceramics" << endl;
                cout << "Cooking" << endl;
                cout << "Creative_writing" << endl;
                cout << "Please type your action:" << endl;
                cin >> interestaction;
            }
            if (interestaction == "Ceramics") {
                cout << "You love the mug that you have made." << endl;
                Artistic_sense += 5;
                Curiosity += 3;
            }
            if (interestaction == "Cooking") {
                cout << "You have tried your own speghetti. It tastes great!" << endl;
                Cooking_sense += 5;
            }
            if (interestaction == "Programming") {
                cout << "You become more and more familiar with c++." << endl;
                Intelligence += 5;
            }
            if (interestaction == "Creative_writing") {
                cout << "You have more and more ideas in writing." << endl;
                Curiosity += 10;
            }
        }

        if (action == "Family") {
            string familyaction;
            familyaction = "lalala";
            while (familyaction != "Parents" && familyaction != "Partner" && familyaction != "Children/Child") {
                cout << "You can commit one of the following actions" << endl;
                cout << "Parents" << endl;
                if (partner == 1) {
                    cout << "Partner" << endl;
                }
                if (fchild >= 1 || mchild >= 1) {
                    cout << "Children/Child" << endl;
                }
                cout << "Please type your action:" << endl;
                cin >> familyaction;
            }
            if (familyaction == "Parents") {
                cout << "You love spending time with your mum and dad." << endl;
            }
            if (familyaction == "Partner") {
                cout << "Let's have a child together!" << endl;
                int min = 0, max = 3;
                int rannd = rand() % (max - min + 1) + min;
                if (rannd == 3) {
			fchild += 1;
                        cout << "Congradualations! You get a baby girl!" << endl;
			cout << "She looks similar to you!!"<<endl;
			if (images == '1') {
			image1();}
			if (images == '2') {
			image2();}
			if (images == '3') {
			image3();}
			Children c;                         //dynamic memory allocation
			c.gender = "female";
			// calculate children's year of birth
			time_t now = time(0);
			tm *ltm = localtime(&now);
			c.birth_year = 1900 + ltm->tm_year + ages;
			child.push_back(c);
                }
                if (rannd == 4) {
                    mchild += 1;
                    cout << "Congradualations! You get a baby boy!" << endl;
			mchild+=1;
			cout << "He looks similar to you!!"<<endl;
			if (images == 1) {
			image1();}
			if (images == 2) {
			image2();}
			if (images == 3) {
			image3();}
			Children c;
			c.gender = "male";
			// calculate children's year of birth
			time_t now = time(0);
			tm *ltm = localtime(&now);
			c.birth_year = 1900 + ltm->tm_year + ages;
			child.push_back(c);
                }
            }
            if (familyaction == "Children/Child") {
                cout << "You enjoy great time with your kids!" << endl;
            }
        }
				menuage+=1;
				string menu = "";
				if (menuage%6==0){
				cout << ""<<endl;
				cout << "Please type MENU if you would like to call the menu. Else, type PASS to continue" << endl;
				cout << ""<<endl;
				cin>>menu;
				if (menu == "MENU"){
					Menu();
					string menu = "";
				}
				cout<<""<<endl;
			}
			cout<<""<<endl;
    }
        cout << "You are now 65 years old." << endl;
        cout << " You have came to the end of your life." << endl;
        cout << "Hope that you all get a fruitful life" << endl;
        cout << "Welcome to start the game again to gain another life!" << endl;


}

//The main function allows users to set names and choose faces
int main(){
	string menu = "";
	count = 0;
	while (count != 1){
			if (restart == 0){
				cout << "Welcome to Life Simulation!!" << endl;
				cout << "In this game, you can determine the roles life by making choices. From family to career, from entertainment to life long learning, live a unique life in every turn!" << endl;
				cout << "Please notes that you could call the MENU every 6 years only." << endl;
					cout << "Now, please choose a name for yourself." <<endl;
					cin >> Name;
					cout << "Now, please choose your gender. Choose Female by typing F. Choose Male by typing M." << endl;
					cin >> gender;
					while (gender != 'F' && gender != 'M') {
					 cout << "Choose Female by typing F. Choose Male by typing M." << endl;
					 cin >> gender;
					}
					images=' ';
					cout << "Now, lets look at the faces:" << endl;
					while (images != '1' && images != '2' && images != '3') {
						cout << "1" << endl;
					  image1();
					  cout << "2" << endl;
					  image2();
					  cout << "3" << endl;
					  image3();
					  cout << "Please choose your face!" << endl;
					  cin >> images;
					}
					restart = 1;
			}
			if (ages >= 0 && ages < 6){
				phase1();
			}

			else if (ages >= 6 && ages < 12){
				phase2();
			}
			else if (ages >=12 && ages < 18){
				phase3();
			}
			else if (ages >= 18 && ages < 22){
				phase4();
			}
			else if (ages >= 22 && ages < 66){
				phase5();
			}
			cout << ""<<endl;
			cout << "Please type MENU if you would like to call the menu. Else, type PASS to continue" << endl;
			cout << ""<<endl;
			cin>>menu;
			if (menu == "MENU"){
				Menu();
			}
		}
		 return 0;
}
