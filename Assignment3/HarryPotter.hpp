/*********************************************************************
** Program Filename : HarryPotter Header
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : HarryPotter Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/



#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "Creature.hpp"
class HarryPotter: public Creature {


private: 
	bool alive;
	void life();
	
public:
	HarryPotter();
	int attack(); 
	void defense(int);
	
	

	
};

#endif  //!1

