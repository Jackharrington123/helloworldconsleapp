// Author : Jack harrington
//purpos rpg game 
//Psedocode : this will be an argp game with no graphics only text
//Maintenance log: 1 added first few lines of code. 1/11/21: added first rout, fixed un random numbers problem, polished design.
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

struct player {
	int min = 15;
	int max = 40;
	int hp = min + rand() % (max - min);
	int minl = 1;
	int maxl = 10;
	int AP = minl + rand() % (maxl - minl);
	int mi = 1;
	int ma = 10;
	int ad = mi + rand() % (ma - mi);
	int gold = 50;
	string name;
};

int nameinstructions(player& P)
{
	printf("Instructions\n\n");
	printf("more instructions\n\n");
	printf("\nmenu");
	printf("\n in this game you will be making choices to complete and ultimate quest.\n");
	printf("\ntype 'y' or 'n' for yes and no when you need to make a choice\n");
	Sleep(1000);
	printf("what is your name?");
	cin >> P.name;
	cout << "nice to meet you " << P.name;
	Sleep(1000);
	printf("quick instruction");
	Sleep(1500);
	system("CLS");
	printf("REMEMBER, ONLY RESPOND IN CAPITAL LETTERS");
	Sleep(5000);
	system("CLS");
	printf("ok");
	
	return 0;
}
int room1andplannedfight(player& P){
	string response;

if (response == "L")
{
		printf("\nyou take the left path");
		Sleep(1500);
		printf("\nyou have your torch light the way and standing in front of you is a troll");
		Sleep(1500);
		printf("\nwill you fight it?");
		Sleep(1500);
		printf("\nY or N");
		Sleep(1500);
		cin >> response;
		fseek(stdin, 0, SEEK_END);
}
	if (response == "Y")
	{
		printf("\nyou fight the troll");
		Sleep(1500);
		int thpm = 5;
		int thpn = 15;
		int thp;
		int tdmg;
		int tdmgs = 1;
		int tdmgl = 5;
		thp = thpm + rand() % (thpn - thpm);
		printf("\n the troll has %d health\n", thp);
		Sleep(1500);
		int atkmin = 1;
		int atkmax = 5;
		int atk;
		srand((unsigned)time(NULL));
		printf("\nwhen you attack you will pick an attack type, you can pick from AD(attack damage) which is a physical attack or AP(a magic attack) ");
		printf("\n after pickin a attack you will roll a random number between 1 and 5 to determain your damage");
		printf("\n based on what attack you use your AP or AD stat number will be added to the damage to from the total sum of damage you will have for that attak");
		printf("\nwill you pick AP or AD?");
		cin >> response;
		fseek(stdin, 0, SEEK_END);

		printf(" your response was %s", response.c_str());

		if (response == "AP")
		{
			printf("you chose AP");
			atk = atkmin + rand() % (atkmax - atkmin);
			int atkt = atk + P.AP;
			printf("\n you did %d damage ", atkt);
			printf("\n the goblins health is %d ", thp - atkt);
			printf("\n the troll srikes back back");
			tdmg = tdmgs + rand() % (tdmgl - tdmgs);
			printf("\n the troll does %d damage to you", tdmg);
			P.hp - tdmg;
			printf("\nyour P.hp is now at %d ", P.hp);
			printf("\n the goblin is still alive will you attak with AP or AD");
			cin >> response;
			fseek(stdin, 0, SEEK_END);
			if (response == "ap")
			{
				printf("you chose AP");
				atk = atkmin + rand() % (atkmax - atkmin);
				int atkt = atk + P.AP;
				printf("\n you did %d damage ", atkt);
				printf("\n the goblins health is %d ", thp - atkt);
				printf("\n the troll srikes back back");
				tdmg = tdmgs + rand() % (tdmgl - tdmgs);
				printf("\n the troll does %d damage to you", tdmg);
				P.hp - tdmg;
				printf("\nyour hp is now at %d ", P.hp);
				if (response == "ad")
				{
					printf("you chose AD");
					atk = atkmin + rand() % (atkmax - atkmin);
					int atkt = atk + P.ad;
					printf("\n you did %d damage ", atkt);
					printf("\n the goblins health is %d ", thp - atkt);
					printf("\n the troll srikes back back");
					tdmg = tdmgs + rand() % (tdmgl - tdmgs);
					printf("\n the troll does %d damage to you", tdmg);
					P.hp - tdmg;
					printf("\nyour P.hp is now at %d ", P.hp);

				}
				printf("\nyou did it!");
				printf("\n you defeated your first foe!");
				printf("")

			}

		}
	}

}
int room2diningroom(player& p)
{

}
int room3kidsroom(player& p)
{
	printf("\nin the room is nothing special");
	printf("\nlooking around the room you dont find much exept and odd shapped key");
	printf("\n you pick up the key");
	int key;
     key = 1;
	 printf("\n you leave the room");
}
int room4wineroom(player& p);
int room5kitchen(player& p);
int room6quizroom(player& p);
int main()
{
		nameinstructions();
		srand((unsigned)time(NULL));
		int min = 15;
		int max = 40;
		P.hp = min + rand() % (max - min);
		printf("\nyour starting Health points is %d\n", P.hp);
		Sleep(1500);
		int minl = 1;
		int maxl = 10;
		int AP;
		AP = minl + rand() % (maxl - minl);
		printf("\nyour starting Ability power is %d\n", AP);
		Sleep(1500);
		int mi = 1;
		int ma = 10;
		int ad;
		ad = mi + rand() % (ma - mi);
		printf("\nyour starting Attak power is %d\n", ad);
		int gold = 50;
		printf("\nyou start your adventure by walking into a deep dark cave cave.");
		Sleep(1500);
		printf("\nthe cave was damp and dark, after a mintue of walking in the dark you light your torch, with the new found light you see the cave splits into two paths. ");
		Sleep(1500);
		printf("\n which way will you go?");
		Sleep(1500);
		printf("\n left = 'L' right = 'R' ");
		Sleep(1500);
		string response;
		cin >> response;
		fseek(stdin, 0, SEEK_END);
		room1andplannedfight(player & P);
		printf("good job, but now its time to move farther into the cave.");
		printf("\n as you move farther into the cave you see a light at the end, \n you walk towards the light, once there you find out the sorce of the light was the sun outside.\n stepping out of the cave you are greeted with a house, the old wood was rotting and splintering.\n do you want to go inside the house or look around first.\n 1)Find a way inside \n2)look around");
		cin >> response;
		if (response == "1")
		{
			printf("after a second of looking around you find a way to get in,\n");
			printf("a window on the south side of the house was broken and as a result you were able to crawl into the house");
			printf("once through the window you find yourself in a bed room");
			printf("\n the bed room was quite barren, nothing but the bed a night stand and a few paintings on the wall");
			printf("you walk over to the door of the room and open.\n once opening the door the come to notice a very apprent fact.\n the house might look small on the outside but the inside somehow is a massive mansion\n");
			printf("The winding staircases led to rooms high up and far below you");
			printf("\n right in front of you is a staircase, the staircase is split into two sides one going up and the other leading down.");
			printf("\nwhich way will you go \n1)Up \n2)down");



		}
		if (response == "2");
		{
			printf("\n you wonder around the outside of the house, \n you notice that there are vines creeping around the house,\n the plants outside are all overgrown");
			printf("after a little more searching you find a window on the south side of the house which was broken enough that you could climb into it");
			printf("once through the window you find yourself in a bed room");
			printf("\n the bed room was quite barren, nothing but the bed a night stand and a few paintings on the wall");
			printf("you walk over to the door of the room and open.\n once opening the door the come to notice a very apprent fact.\n the house might look small on the outside but the inside somehow is a massive mansion\n");
			printf("The winding staircases led to rooms high up and far below you");
			printf("\n right in front of you is a staircase, the staircase is split into two sides one going up and the other leading down.");
			printf("\nwhich way will you go \n1)Up \n2)down");

		}
		cin >> response;
		if (response == "1");
		{
			printf("\n you go up the stairs");
			printf("\nyou find three doors");
			printf("\n two are locked but one is not ");
			printf("\nyou open the door, inside is a kids room,");
			room3kidsroom();
			printf("\nback in the hallway now you still cant open the doors so you go back down the stairs to the floor you came from.");



		}
		if (response == "2");
		{
			printf("\n you go down the stairs");
			printf("\once at the bottom there is 3 doors you see, \n you walk up to all of them but only one of them is able to be unlocked.")
		}


		







}