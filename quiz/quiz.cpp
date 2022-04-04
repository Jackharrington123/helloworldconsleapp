// Author : Jack harrington
//purpos its a quiz with three questions 
//Psedocode :this is just a quiz with three questions, getting a question wrong will subtract points but when correct it adds points, the player will not be deducted points for putting in a anwser that is not a letter option.
//Maintenance.11/20/21 started the quiz and got the first question half way done. 11/22/21 got the first question done and the rest three. 11/23/21 fixed errors and just polished the project.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
	printf("welcome to my quiz\n");
	printf("when answering questiosn use upercase letters such as A and B");
	printf("what is your name\n");
	string name;
	cin >> name;
	cout << "well good luck " << name;
	printf("\n question 1. How many elements are on the periodic table\n ");
	printf("A) 118");
	printf("\n B) 12");
	printf("\n C) 57");
	printf("\n D) 82");
	string ans;
	Sleep(1000);
	cin >> ans;
	int points = 0;
	fseek(stdin, 0, SEEK_END);
	if (ans == "A")
	{
	 points = points + 4;
		printf("\nyou are correct");
		
	}
	else if (ans == "B")
	{
		 points = points - 1;
		printf("\nincorect, next question");
	}
	else if (ans == "C")
	{
		 points = points - 1;
		printf("\n you are incorect, next question");
	}
	else if (ans == "D")
	{
		 points = points - 1;
		printf("\n you are incorect, next question");
	}
	printf("\nyou have %d points", points);
	printf("\nquestion 2: how heavy is one ounce of pure gold ");
	printf("\nA) 12 ounces");
	printf("\nB) 12 pounds");
	printf("\nC) 31 grams");
	printf("\nD)31 ounces");
	Sleep(1000);
	cin >> ans;
	fseek(stdin, 0, SEEK_END);
	if (ans == "A")
	{
	 points = points - 1;
		printf("\n you are incorect, next question");
	}
	else if (ans == "B")
	{
		 points = points - 1;
		printf("\nincorect, next question");
	}
	else if (ans == "C")
	{
		 points = points + 4;
		printf("\ncorrect");
	}
	else if (ans == "D")
	{
		 points = points - 1;
		printf("\n you are incorect, next question");
	}
	printf("\nyou have %d points", points);
	Sleep(1000);
	printf("\nquestion 3: how fast is the speed of sound ");
	printf("\nA) 700 MPH");
	printf("\nB) 761 MPH");
	printf("\nC) 489 MPH");
	printf("\nD)2000 MPH");
	Sleep(1000);
	cin >> ans;
	fseek(stdin, 0, SEEK_END);
	if (ans == "A")
	{
		points = points - 1;
		printf("\n you are incorect, next question");
	}
	else if (ans == "B")
	{
		points = points + 4;
		printf("\ncorrect");
	}
	else if (ans == "C")
	{
		points = points + 4;
		printf("\n you are incorect, next question");
	}
	else if (ans == "D")
	{
		points = points - 1;
		printf("\n you are incorect, next question");
	}
	printf("\n the quiz is done and you finished with %d points", points);
	Sleep(1000);
	printf("thats all the questions, thank you for playing");

}
