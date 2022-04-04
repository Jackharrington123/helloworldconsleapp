// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
	printf("welcome to my chose your own adventure");
	printf("\nwho is playing?");
	string name;
	cin >> name;
	fseek(stdin, 0, SEEK_END);
	cout << "\nwell good luck " << name;
	Sleep(1000);
	printf("\nand now the adventure beings");
	printf("\nyour lost, no cell service, no map, no nothing");
	printf("\nyou are walking down a small forest path, you were cold and tired.");
	printf("\nafter what felt years of walking you find your self at the end of the path, in front of you is house, it was old");
	printf("\n the wood was splintered, the windows were cracked and broken, every flower in the garden witherd away and in there place vines grew which consumed the house.");
	printf("\n will you");
	printf("\n 1)go inside the house");
	printf("\n 2)search around");
	printf("\n 3)climb the vines");
	string pick;
	cin >> pick;
	fseek(stdin, 0, SEEK_END);
	if (pick == "1")
	{
		printf("\nyou chose to walk inside, as you walk up the creaky wood front steps. you pear through the cracked glass on the front door. You take hold of the brass door nob and try and turn it, it wont budge.");
		printf("\nwill you");
		printf("\n1) break down the door.");
		printf("\n2) find a new way.");
		cin >> pick;
		if (pick == "1");
		{
			printf("you ram into the door, it didnt move so you hit it again, a few times over you ram your body into the door until finaly the door swings open under the force of your body slaming into it. \n your now inside the house");
			printf("\n now in the house you look around, around you was an entry way table with a cracked vase on it holding the remains of flower stems.");
		}

	}
	else if (pick == "2")
	{
		
		printf("\n you chose to search around, around the house was a thousand of shards of glass from the broken windows on all side of the house, you also find a broken garden trowel. ");
		printf("\n what will do");
		printf("\n1)break down the front door");
		printf("\n 2) find a new way in");
		cin >> pick;
		if (pick == "1");
		{
			printf("you ram into the door, it didnt move so you hit it again, a few times over you ram your body into the door until finaly the door swings open under the force of your body slaming into it. \n your now inside the house");
			printf("\n now in the house you look around, around you was an entry way table with a cracked vase on it holding the remains of flower stems.");
		}
	}
	else if (pick == "3")
	{
		printf("\n you walk over to the side of the house and grip the vines, they were slick but after a few trys you mannage to scale them. you climb up the vines inch by inch slowly geting closer to the top of the house. when you reach the top of the house you look around to see whats around, nothing but tree tops for as far as the eye could see.");
		printf("\n Do you give up?, with no escape out of this forest hellscape you lie down on the roof of the house and just lie there for a while, you watch the birds fly from tree to tree.");
		cin >> pick;
		if (pick == "1")
		{
			printf("\n you give up, you close your eyes and lie on the roof for a while letting the cold air bite at your limbs");
		}
	}
	
	



}

