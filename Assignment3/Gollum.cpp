/*********************************************************************
** Program Filename : Gollum CPP 
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : Gollum Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "Gollum.hpp"

/*********************************************************************
** Function: Gollum Constructor
** Description: Intializes Gollum Strength and Armor in Creature Class
** Parameters: void and Creature(Armor, Strength)
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/


Gollum::Gollum(): Creature(3, 8) // passes armor and strength to creature class constructor
{
	 
}

/*********************************************************************
** Function: Gollum attack()
** Description: Calls Play in Creature Class to get Attack
** Parameters: void
** Pre-Conditions: battle()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int Gollum::attack()
{   
	if (play(1, 20) == 1) {  // if 20 sided dice roll equals 1 (5% chance)
		
		int at = play(3, 6); // gollum rolls extra die for ring
		std::cout << "Gollum wears the RING and is INVISIBLE! Gollum rolls 3 Attack die.\n"; 
		std::cout << "Gollum has rolled a "<< at << " in Special Attack.\n";
		return (at);
	}
	else { // normal 2 sided die play
		
		int at = play(2, 6);
		std::cout << "Gollum has a rolled a " << at << " in Attack.\n";  // user output so game is fun. Also good testing
		return (at);
	}
	
	 
	
}

/*********************************************************************
** Function: Gollum defense()
** Description: takes attack and returns Gollum health
** Parameters: int attack
** Pre-Conditions: battle() attack()
** Post-Conditions: damage() then battle() or main()
** Citation:
*********************************************************************/

 void Gollum::defense(int attack)
{
	//std::cout << "Gollum's Strength before Attack is " << getStrength() << ".\n"; // used for testing
	int def = play(1,6); // calls play function to roll dies
	
	std::cout << "Gollum has rolled a " << def << " in Defence.\n";
	
	int health = getStrength() - damage(def, attack); // gets health after attack
	
	std::cout << "Gollum's total damage is " << damage(def, attack) << ".\n\n"; // output to play along
	
	setStrength(health); // sets creatures strength in creature class

	// std::cout << "Gollum's strength is " << getStrength() << ".\n\n"; // output for testing
	
	
}
