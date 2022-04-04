// Author : Jack harrington
//purpos give random fortune with vectors 
//Psedocode : takes a bunch of quotes and stuff from the vector and it choses a random one and prints it
//Maintenance. 1/28/22 done, took only one class period 

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
  vector<string> fortune = { "how was your day?", "be kind", "be helpfull", "make someones day better", "be great", "do something kind today", "slow down and enjoy life for today", "dont stress your self out","take a day off if you feel you need it", "its ok to not be perfect","Be yourself; everyone else is already taken","You've gotta dance like there's nobody watching", "Be the change that you wish to see in the world.", "Live as if you were to die tomorrow"  };
  char response;
  do
  {
      int i = 0 + rand() % fortune.size();
      printf("%s\n", fortune[i].c_str());
      printf("Try another? (y, n)\n");
      cin >> response;
      response = toupper(response);
      if (response == 'N') {
          printf("Bye bye\n");
      }
      else {
          printf("Loading another...\n");
      }
  } while (response == 'Y');
    return 0;
}



