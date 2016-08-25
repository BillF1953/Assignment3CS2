/*********************************************************************
** Program Filename : Creature Header
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : Abstract Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations : 
********************************************************************/



#ifndef CREATURE_HPP
#define CREATURE_HPP
#include "Dice.hpp"

class Creature: private Dice{

private: 
	int armor;
	int strength; 

public:
	Creature(int, int); 
	virtual int attack() = 0; 
	virtual void defense(int) = 0; 
	int play(int, int);
	void setStrength(int);
	int getStrength(void);
	int getArmor(void);
	int damage(int def, int attack);
};

#endif  //!1

