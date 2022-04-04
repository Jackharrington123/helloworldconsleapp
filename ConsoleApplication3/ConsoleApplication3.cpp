// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


using namespace std;
int main()
{

	srand((unsigned)time(NULL));
	int min = 5;
	int max = 20;
	int rn;
	rn = min + rand() % (max - min);
	printf("%d\n", rn);
}
