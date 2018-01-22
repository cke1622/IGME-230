#include "stdafx.h"
#include <time.h>

void LaunderMoney()
{
	srand(time(NULL));
	int randomNumber = (rand() % 100) + 1;
	if (randomNumber <= 50)
		cout << "You were caught";
	else
		cout << "You were not caught";
}