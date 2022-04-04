// Author : Jack harrington
//purpos tells you how many buses nd bas you will need for a certain amount of people
//Psedocode : it takes user input and then divides it so it can get to a final anwser as to how many vans you need and how many bussed oyu need
//Maintenance log: 10/

#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

int main()
{
	;
    printf("how many bus\n");
	printf("you are going to charter bus.\n");
	printf("input the number of people going and\n");
	printf("the app will tell you the number of bus you need\n");
	printf("and how many people need a van\n");
	printf("(only full bus will be charterd\n");
	printf("input number of people going:\n");
	int people;
	scanf_s("%d", &people);
	fseek(stdin, 0, SEEK_END);
	int bus;
	const int busCapacity = 60;
	bus = people / busCapacity;
	int vans;
	fseek(stdin, 0, SEEK_END);
	vans = people % busCapacity;
	int vanCapacity = 7;
	int howvansw;
	howvansw = vans / vanCapacity +1;
	printf("you will need to charter %d bus and %d people in vans.\n", bus, vans);
	printf("you will need %d vans\n", howvansw);
	printf("press the any key to continue.\n");
	return 0;
}