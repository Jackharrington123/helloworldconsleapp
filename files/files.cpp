// files.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int main() {
	ifstream in;
	ofstream out("outputfile.txt");
	in.open("inputfile.txt");
	string temp;

	if (!in.is_open())
	{
		printf("file not found...");
		return 0;
	}
	while (getline(in, temp))
	{
		printf("%s\n", temp.c_str());
		out << temp << '\n';
	}
	out.close();
	in.close();
	return 0;
	
}

