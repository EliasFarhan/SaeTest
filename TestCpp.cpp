#include <iostream>
#include <string>

#include "Monster.h"

int main()
{
	Monster * m1 = new Monster;
	Monster * m2 = new Monster;

	//Initialize the monsters
	m1->init();
	m2->init();

	//TODO: The fight begins
	Monster* firstMonster;
	Monster* secondMonster;

	if (m1->GetSpeed() > m2->GetSpeed())
	{
		firstMonster = m1;
		secondMonster = m2;
	}
	else
	{
		firstMonster = m2;
		secondMonster = m1;
	}


	while (m1->isAlive() && m2->isAlive())
	{
		firstMonster->attack(secondMonster);
		secondMonster->attack(firstMonster);
	}

	//TODO: Output the result

	//end of the program
	delete m1;
	delete m2;

	system("pause");
	return 0;
}
