// counting files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
#define _use_math_defines
#include <math.h>
#include <fstream>
using namespace std;
int main()
{
	ifstream in;
	in.open("Files for counting.txt");
	string temp;
	vector<int> count;
	
	while (getline(in, temp, ','));
	{
		count.push_back(stoi(temp));
		printf("%i", count );
	}

}

