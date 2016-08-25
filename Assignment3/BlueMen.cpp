/*********************************************************************
** Program Filename : BlueMen CPP 
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : BlueMen Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "BlueMen.hpp"

/*********************************************************************
** Function: BlueMen Constructor
** Description: Intializes BlueMen Strength and Armor in Creature Class
** Parameters: void and Creature(Armor, Strength)
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/


BlueMen::BlueMen(): Creature(3, 12) // passes armor and strength to creature class constructor
{
	 
}

/*********************************************************************
** Function: BlueMen attack()
** Description: Calls Play in Creature Class to get Attack
** Parameters: void
** Pre-Conditions: battle()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int BlueMen::attack()
{
	int at = play(2, 10); // plays with special ten sided die
	std::cout << "BlueMen has a rolled a " << at << " in Attack.\n";  // user output so game is fun. Also good testing
	return (at); 
}

/*********************************************************************
** Function: BlueMen defense()
** Description: takes attack and returns BlueMen health
** Parameters: int attack
** Pre-Conditions: battle() attack()
** Post-Conditions: mob() damage() then battle() or main()
** Citation:
*********************************************************************/

 void BlueMen::defense(int attack)
{
	//std::cout << "BlueMen's Strength before Attack is " << getStrength() << ".\n"; // used for testing
	
	int die = mob();  // calls BlueMen mob to determine number of dice rolled in defense
	
	int def = play(die,6); // calls play function to roll dies
	
	std::cout << "BlueMen has rolled " << die << " die(s) for a defence of " << def << ".\n";
	
	int health = getStrength() - damage(def, attack); // gets health after attack
	
	std::cout << "BlueMen's total damage is " << damage(def, attack) << ".\n\n"; // output to play along
	
	setStrength(health); // sets creatures strength in creature class

	// std::cout << "BlueMen's strength is " << getStrength() << ".\n\n"; // output for testing
	
	
}



/*********************************************************************
** Function: BlueMen mob()
** Description: determines number of dice rolled in defense
** Parameters: void
** Pre-Conditions: battle() attack() def()
** Post-Conditions: def() 
** Citation:
*********************************************************************/

int BlueMen::mob() {

	if (getStrength() > 8) {

		return 3;
	}

	else if (getStrength() > 4 ){

		return 2; 

		
	}

	else {

		return 1; 
	
	}

}
