#include<iostream>
#include "Header.h"

int main()
{
	Mage simp;
	Warrior rock;

	
	rock.damage(20);
	std::cout << "okrzyki:";
	simp.taunt();
	rock.taunt();

	std::cout <<"\n\nstatystyki maga\n" << simp<<"\n\n";
	std::cout << "statystyki wojownika\n" << rock;
	return 0;
}