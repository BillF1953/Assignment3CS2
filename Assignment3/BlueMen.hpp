/*********************************************************************
** Program Filename : BlueMen Header
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : BlueMen Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/



#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "Creature.hpp"
class BlueMen: public Creature {


private: 
	int mob();
	

public:
	BlueMen();
	int attack(); 
	void defense(int);
	


	
};

#endif  //!1

