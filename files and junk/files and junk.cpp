// files and junk.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	in.open("text.txt");
	string temp;
	vector<int> num;
	vector<float> fnum;
	 
	vector<string> s;
	string c;

	while (getline(in, temp, ','));
	{
		num.push_back(stoi(temp));
  		fnum.push_back(stof(temp));
		getline(in, temp, ',');
		s.push_back(temp);
		getline(in, temp, '\n');
		c += temp[0];


	}

	in.close();

	for (int i = 0; i < num.size(); i++)
	{
		printf("%i\t%f\t%s\t%c", num[i], fnum[i], s[i].c_str(), c[i]);
	}

	ofstream out;
	out.open("text2.txt");
	for (int i = 0; i < num.size(); i++)
	{
		out << num[i] << '\t' << fnum[i] << '\t' << s[i] << '\t' << c[i] << '\n';

	}
	return 0;
}

