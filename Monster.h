#ifndef MONSTER_H
#define MONSTER_H

enum class Race
{
	ORC		= 1,
	TROLL	= 2,
	GOBLIN	= 3,
};

class Monster
{
public:
	Monster();//constructor
	~Monster();//destructor

	void init();
	void attack(Monster*);
	void takeDamage(double);

	bool isAlive();

	//Getter Setter
	double GetDefensePower();
	double GetSpeed();

private:
	double m_HealthPoints;
	double m_AttackPower;
	double m_DefensePower;
	double m_Speed;

	Race m_Race;
};

#endif
