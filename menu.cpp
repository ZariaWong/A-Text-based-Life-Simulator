//Menu.cpp
#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include<ctime>
#include <stdio.h>
#pragma comment(lib,"winmm.lib")
using namespace std;

void Pos(int x, int y);
void HideCursor();

int Menu_Examine = 0;			//avoid menu be repeatedly printed 
void DrawMenu()					//print the menu
{
	void HideCursor();
	if(Menu_Examine==0)
	{ 
	    Menu_Examine = 1;
		for (int i = 5; i > 0; i--)
		{
			printf("\n");
		}
		printf("\t\t\t\t ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t |                  Life Simulation                   |\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t |                      Start                         |\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t |                      Save                          |\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t |                      Restart                       |\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t |                      Exit                          |\n");
		printf("\t\t\t\t |                                                    |\n");
		printf("\t\t\t\t ☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆-☆\n");
		printf("\t\t\t\t                                 Designer: Zaria, Wadi");
		}
}

void Chioce(int &x)
{
	void HideCursor();
	static char n = '1';
	if (_kbhit())
	{
		char temp = _getch();	//temporary variable stores the entered value
		if ((n == '1') && (temp == 'w'))
		{
			n = '1';			//can't scroll up when choosing '1'
		}	
		else if ((n == '1') && (temp == 's'))
		{
			n = '2';
		}
		else if ((n == '4') && (temp == 'w'))
		{
			n = '1';
		}
		else if ((n == '4') && (temp == 's'))
		{
			n = '4';			//can't scroll down when choosing '4'
		}
		else if ((temp == ' ') && (n == '1'))
		{
			x = 2;				//load the game
			return;
		}
		else if ((temp == ' ') && (n == '2'))
		{
			x = 3;
			return;
		}
		else if ((temp == ' ') && (n == '3'))
		{
			x = 4;
			return;
		}
		else if ((temp == ' ') && (n == '4'))
		{
			exit(0);			//exit
		}
	}
	switch (n)
	{
	case '1':					//slect cursor points to ‘Start’
		Pos(52, 9);
		cout << "●";
		Pos(52, 11);
		cout << "  ";
		Pos(52, 13);
		cout << "  ";
		Pos(52, 15);
		cout << "  ";
		break;
	case '2':					//slect cursor points to ‘Save’
		Pos(52, 9);
		cout << "  ";
		Pos(52, 11);
		cout << "●";
		Pos(52, 13);
		cout << "  ";
		Pos(52, 15);
		cout << "  ";
		break;
	case '3':					//slect cursor points to ‘Restart’
		Pos(52, 9);
		cout << "  ";
		Pos(52, 11);
		cout << "  ";
		Pos(52, 13);
		cout << "●";
		Pos(52, 15);
		cout << "  ";
		break;
	case '4':					//slect cursor points to ‘Exit’
		Pos(52, 9);
		cout << "  ";
		Pos(52, 11);
		cout << "  ";
		Pos(52, 13);
		cout << "  ";
		Pos(52, 15);
		cout << "●";
		break;
	}
	Sleep(10);				//set the interval to avoid flickering
}
