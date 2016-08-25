/*********************************************************************
** Program Filename : Medusa CPP 
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : Medusa Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "Medusa.hpp"

/*********************************************************************
** Function: Medusa Constructor
** Description: Intializes Medusa Strength and Armor in Creature Class
** Parameters: void and Creature(Armor, Strength)
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/


Medusa::Medusa(): Creature(3, 8) // passes armor and strength to creature class constructor
{
	 
}

/*********************************************************************
** Function: Medusa attack()
** Description: Calls Play in Creature Class to get Attack
** Parameters: void
** Pre-Conditions: battle()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int Medusa::attack()
{
	int at = play(2, 6); // use play function to roll die and return number
	std::cout << "Medusa has a rolled a " << at << " in Attack.\n";  // user output so game is fun. Also good testing
	if (at == 12) {
		std::cout << "Medusa's Stony Glare Has Killed the Other Player!!\n";
		at = 20000;  // insta death if 12 is rolled. 
	}

	return (at); 
}

/*********************************************************************
** Function: Medusa defense()
** Description: takes attack and returns Medusa health
** Parameters: int attack
** Pre-Conditions: battle() attack()
** Post-Conditions: damage() then battle() or main()
** Citation:
*********************************************************************/

 void Medusa::defense(int attack)
{
	//std::cout << "Medusa's Strength before Attack is " << getStrength() << ".\n"; // used for testing
	int def = play(1,6); // calls play function to roll dies
	
	std::cout << "Medusa has rolled a " << def << " in Defence.\n";
	
	int health = getStrength() - damage(def, attack); // gets health after attack
	
	std::cout << "Medusa's total damage is " << damage(def, attack) << ".\n\n"; // output to play along
	
	setStrength(health); // sets creatures strength in creature class

	// std::cout << "Medusa's strength is " << getStrength() << ".\n\n"; // output for testing
	
	
}
