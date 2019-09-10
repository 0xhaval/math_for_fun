/*
	Auther	: Omar M. Omar
	Date	: Sept 10,2019
	App		: MATH for Fun 
	Benefits: To practice some Math equation 
*/
#include "stdafx.h"
#include <iostream>
#include <ctime>	//For time()
#include <cstdlib>	//For srand() and rand()
#include <string>	//For string
using namespace std;

void start_game(int x, int y){
	cout<<"\n";
	cout<<"\t\t::::::::::::::::::::::::::::::::::\n";
	cout<<"\t\t::\t\t\t\t::\n";
	cout<<"\t\t::\t\t\t\t::\n";
	cout<<"\t\t::   Welcome to MATH for Fun    ::\n";
	cout<<"\t\t::\t\t\t\t::\n";
	cout<<"\t\t::\t\t\t\t::\n";
	cout<<"\t\t::::::::::::::::::::::::::::::::::\n\n\n";

	int res=0,user,count=0;
	//Player Name
	string name;
	cout<<"Enter your Name : ";cin>>name;

	cout<<"\t"<<x<<"\n\t"<<y<<" +\n\t_______\n";
	cout<<"Enter Ther Resulat : ";

	//res = is resualt for addition two random number
	res = y+x;

	//Check if the user enter char in resualt
	if(!(cin>>user))
		cout<<"Error : Please enter Nubmer\n";
	else
		if(res == user)
		{
			cout<<"=================================================\n";
			cout<<"=\t\t\t\t\t\t=\n";
			cout<<"=       Congratulations "<<name<<" you are GENIUS   =\n";
			cout<<"=       you solve it in"<<count<<" Seconds    =\n";
			cout<<"=\t\t\t\t\t\t=\n";
			cout<<"=================================================\n";
		}
		else
		{
			cout<<"\n\n=================================================\n";
			cout<<"=\t\t\t\t\t\t=\n";
			cout<<"=       Oops !! "<<name<<" you lost the game   \t=\n";
			cout<<"=\t\t\t\t\t\t=\n";
			cout<<"=================================================\n\n\n\n\n\n\n\n\n";
		}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int x,y,n;
	//initialize random number generator
	srand(time(0));
	do
	{
		cout<<">(1)< Start Game\n";
		cout<<">(2)< Exit Game\n";
		cout<<"\nEnter your Chooise : ";cin>>n;
		switch (n)
		{
		case 1:

			x = rand() % 100;
			y = rand() % 100;
			start_game(x,y);
			break;
		default:
			cout<<"\n\t\tWe hope comeback for Game :)\n\n\n";
			break;
		}
	}while(n != 2);
	return 0;
}

