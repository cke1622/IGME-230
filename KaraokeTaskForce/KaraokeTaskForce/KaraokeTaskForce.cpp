// KaraokeTaskForce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char song1[30] = "Thru the fire and flames";
	cout << strlen(song1) << endl;
	char buffer[10];
	strcpy_s(buffer, song1);
	cout << strlen(buffer) << endl;
	cout << song1 << endl;
	cout << buffer << endl;

    return 0;
}

