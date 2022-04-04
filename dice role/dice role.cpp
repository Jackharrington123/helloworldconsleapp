// Author : Jack harrington
//purpos roles dice
//Psedocode : roles a random number
//Maintenance log: done
#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	int min = 1;
	int max = 6;
	int rn;
	rn = min + rand() % (max - min);
	printf("%d\n", rn);


 min = 1;
 max = 12;
 rn;
rn = min + rand() % (max - min);
printf("%d\n", rn);



float rf;
rf = (float)rand() / (float)(RAND_MAX + 1);
printf("%f\n", rf);



srand(0);
srand((unsigned)time(NULL));
char bot = 'a';
char top = 'z';
char rc; 
rc = bot + rand() % (top - bot + 1);
printf("%c\n", rc);




}