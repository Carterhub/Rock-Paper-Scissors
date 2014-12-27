#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	//Variables
	int randNumber;
	int compSel;
	int ourSel;
	int compRoll;
	int min = 1;
	int max = 99;
	int randColor;
	//-Variables

	srand(time(0)); //Calc seconds since Jan 1rst, 1970.

	do
	{
		randColor = rand() % 100 + 1;
		if(randColor >= 50) 
		{
			system("color a");
			cout << "You got Color A.\n\n";
		}
		else
		{
			system("color c");
			cout << "You got Color C.\n\n";
		}
		cout << "Welcome to Rock Paper Scissors.\n\n";
		Sleep(1000);
		cout << "1) Rock\n";
		cout << "2) Paper\n";
		cout << "3) Scissors\n";
		cin >> ourSel;
	}
	while(ourSel < 1 || ourSel > 3);

	//------------------Computer Generated------------------
	randNumber = rand() % max + min;

	if(randNumber < 33)
		compSel = 1; //Rock
	else if(randNumber > 33 && randNumber < 66)
		compSel = 2; //Paper
	else
		compSel = 3; //Scissors
	//------------------Computer Generated------------------

	if(ourSel == 1) //Rock
	{
		if(compSel == 1) //Rock	
			cout << "You played Rock and the computer played Rock. Draw.\n";
		else if(compSel == 2) //Scissors
			cout << "You played Rock and the computer played Paper. Rock is covered by Paper. You lose.\n";
		else
			cout <<"You played Rock and the computer played Scissors. Rock rapes Scissors. You win.\n";
	}
	else if(ourSel == 2) //Paper
	{
		if(compSel == 1) //Rock
			cout << "You played Paper and the computer played Rock. You win.\n";
		else if(compSel == 2) //Scissors
			cout << "You played Paper and the computer played Scissors. You lose.\n";
		else
			cout <<"You played Paper and the computer played Paper. Draw game.\n";
	}
	else if(ourSel == 3) //Scissors
	{
		if(compSel == 2) //Rock
			cout << "You played Scissors and the computer played Rock. You lose.\n";
		else if(compSel == 2) //Scissors
			cout << "You played Scissors and the computer played Scissors. Draw.\n";
		else
			cout <<"You played Scissors and the computer played Paper. Scissors dominates Paper, you win.\n";
	}
	system("PAUSE");

}