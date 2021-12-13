// pole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int pole[4];
	pole[0] = 23;
	pole[1] = 6;
	pole[2] = 1268;
	pole[3] = 98;

	for (int i = 0; i < 4; i++) {
		printf("%d: %d\n", i, pole[i]);
	}
}


