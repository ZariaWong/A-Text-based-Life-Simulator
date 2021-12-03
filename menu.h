// menu.h
#ifndef MENU_H
#define MENU_H
#include <vector>
extern int partner, ages, Cooking_sense, Social_skills, Curiosity, Intelligence, Artistic_sense, Academic_performance, Competitiveness, fchild, mchild;
extern std::string Name;
extern char gender,images;

class Children {
public:
	std::string gender;
	int birth_year;
};
extern std::vector<Children> child;

void save();
void load();
void Restart(int &count, int &restart);
void exitgame(int &count);
void DrawMenu();
#endif
