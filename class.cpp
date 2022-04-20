#include <iostream>
#include "Header.h"


void Character::set_attack(double temp)
{
	attack = temp;
}
void Character::display_stats()
{

	std::cout << "hp: " << hp << "\nstamina: " << stamina << "\natak: " << attack;
}
void Character::damage(double dmg)
{
	hp -= dmg;
	if (hp < 0)
		hp = 0;
}

void Mage::display_stats()
{
	Character::display_stats();
	std::cout << "\nmana: " << mana;
}

void Warrior::display_stats()
{
	Character::display_stats();
	std::cout << "\nrage " << rage;
}




std::ostream& operator<<(std::ostream& os, Character& chara)
{
	os << "";
	chara.display_stats();
	return os;
}