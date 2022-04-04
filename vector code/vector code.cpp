// Author : Jack harrington
//purpos lest user pick the scalar and then i does things
//Psedocode :user picks number for scalar and the program uses that scalar for math
//Maintenance.1/31/22 got the code in class and finished it 


#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    vector<int> v;

    for (int i = 0; i < 50; i++)
    {
       int num = 1 + rand() %100;
       v.push_back(num);
    }
    printf("what will the scalar be? you get to decide");
    int response;
    cin >> response;
    int scalar = response;
    cout << "you chose the scalar to be " << response;
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = v[i] * scalar;
        printf("%d", v[i]);
    }
    return 0;
}
