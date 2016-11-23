#include "Monster.h"

#include <iostream>

Monster::Monster()
{
}


Monster::~Monster()
{
}

void Monster::attack(Monster* defenseMonster)
{
	double damage = m_AttackPower - defenseMonster->GetDefensePower();
	if (damage < 0.0)
	{
		damage = 0.0;
	}
	std::cout << damage << " " << m_AttackPower << " " << defenseMonster->GetDefensePower() << "\n";
	defenseMonster->takeDamage(damage);
	
}

void Monster::takeDamage(double damage)
{
	m_HealthPoints -= damage;
}

void Monster::init()
{
	//Race input management
	unsigned int raceInput = 0;
	std::cout << "Please input the race of the Monster(Orc=1, Troll=2, Goblin=3): ";
	std::cin >> raceInput;
	m_Race = (Race)raceInput;

	//HP AP DP S Management
	std::cout << "HP: ";
	std::cin >> m_HealthPoints;
	std::cout << "AP: ";
	std::cin >> m_AttackPower;
	std::cout << "DP: ";
	std::cin >> m_DefensePower;
	std::cout << "S : ";
	std::cin >> m_Speed;
}

double Monster::GetDefensePower()
{
	return m_DefensePower;
}

double Monster::GetSpeed()
{
	return m_Speed;
}

bool Monster::isAlive()
{
	return m_HealthPoints > 0.0;
}