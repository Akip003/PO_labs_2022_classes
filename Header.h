#pragma once
#include <iostream>
class Character
{
private:
	double hp;
	double stamina;
	double attack;
public:
	Character()
	{
		hp = 100;
		stamina = 100;
	}
	void set_attack(double temp);
	virtual void display_stats();
	
	void damage(double dmg);
	virtual void taunt() = 0;
	
};

class Mage : public Character
{
private:
	double mana;
public:
	Mage()
	{
		mana = 100;
		set_attack(20);
	}
	void display_stats();

	void taunt()
	{
		std::cout << "\nFireball!";
	}
	
};

class Warrior : public Character
{
private:
	double rage;
public:
	Warrior()
	{
		rage = 0;
		set_attack(30);

	}
	void display_stats();
	void taunt()
	{
		std::cout << "\nI feel rage!";
	}
};
std::ostream& operator<<(std::ostream& os, Character& chara);