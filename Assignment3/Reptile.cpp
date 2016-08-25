/*********************************************************************
** Program Filename : Reptile CPP 
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : Reptile Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "Reptile.hpp"

/*********************************************************************
** Function: Reptile Constructor
** Description: Intializes Reptile Strength and Armor in Creature Class
** Parameters: void and Creature(Armor, Strength)
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/


Reptile::Reptile(): Creature(7, 18) // passes armor and strength to creature class constructor
{
	 
}

/*********************************************************************
** Function: Reptile attack()
** Description: Calls Play in Creature Class to get Attack
** Parameters: void
** Pre-Conditions: battle()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int Reptile::attack()
{
	int at = play(3, 6); // use play function to roll die and return number
	std::cout << "Reptile has a rolled a " << at << " in Attack.\n";  // user output so game is fun. Also good testing
	return (at); 
}

/*********************************************************************
** Function: Reptile defense()
** Description: takes attack and returns Reptile health
** Parameters: int attack
** Pre-Conditions: battle() attack()
** Post-Conditions: damage() then battle() or main()
** Citation:
*********************************************************************/

 void Reptile::defense(int attack)
{
	//std::cout << "Reptile's Strength before Attack is " << getStrength() << ".\n"; // used for testing
	int def = play(1,6); // calls play function to roll dies
	
	std::cout << "Reptile has rolled a " << def << " in Defence.\n";
	
	int health = getStrength() - damage(def, attack); // gets health after attack
	
	std::cout << "Reptile's total damage is " << damage(def, attack) << ".\n\n"; // output to play along
	
	setStrength(health); // sets creatures strength in creature class

	// std::cout << "Reptile's strength is " << getStrength() << ".\n\n"; // output for testing
	
	
}
