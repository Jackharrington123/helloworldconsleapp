// Author : Jack harrington
//purpos tell you how fast you will need to drive and how many miles per gallon you need
//Psedocode : it takes user input and then divides it so it can get to a final anwser as to how fast you need to drive and how many miles per gallon you will use
//Maintenance log: 10/26/2021:started the project but its not working yet. 10/27/21 restarted and polished my original code and now it works

#include <iostream>

int main()
{
	printf("how many miles are you going to travel");
	int miles;
	scanf_s("%i", &miles);
	fseek(stdin, 0, SEEK_END);
	printf("how many hours will you take to travel");
	int hours;
	scanf_s("%i", &hours);
	fseek(stdin, 0, SEEK_END);
	printf("how many gallons of gas are you gonna use");
	int gallons;
	scanf_s("%i", &gallons);
	fseek(stdin, 0, SEEK_END);
	int mph = miles / hours;
	printf("you will need to do drive %i miles per hour\n", mph); 
	int gph = miles / gallons;
	printf("you will use %i gallons per mile", gph);

}