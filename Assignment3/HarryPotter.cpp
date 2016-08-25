/*********************************************************************
** Program Filename : HarryPotter CPP 
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : HarryPotter Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "HarryPotter.hpp"

/*********************************************************************
** Function: HarryPotter Constructor
** Description: Intializes HarryPotter Strength and Armor in Creature Class
** Sets Flag for First Life
** Parameters: void and Creature(Armor, Strength)
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/


HarryPotter::HarryPotter(): Creature(0, 10) // passes armor and strength to creature class constructor
{
	alive = true;  // flag to keep track of resurrections
	 
}

/*********************************************************************
** Function: HarryPotter attack()
** Description: Calls Play in Creature Class to get Attack
** Parameters: void
** Pre-Conditions: battle()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int HarryPotter::attack()
{
	int at = play(2, 6); // use play function to roll die and return number
	std::cout << "Harry Potter has a rolled a " << at << " in Attack.\n";  // user output so game is fun. Also good testing
	return (at); 
}

/*********************************************************************
** Function: HarryPotter defense()
** Description: takes attack and returns HarryPotter health
** Parameters: int attack
** Pre-Conditions: battle() attack()
** Post-Conditions: damage() then battle() or main()
** Citation:
*********************************************************************/

 void HarryPotter::defense(int attack)
{
	//std::cout << "HarryPotter's Strength before Attack is " << getStrength() << ".\n"; // used for testing
	int def = play(2,6); // calls play function to roll dies
	
	std::cout << "Harry Potter has rolled a " << def << " in Defence.\n";
	
	int health = getStrength() - damage(def, attack); // gets health after attack
	
	std::cout << "Harry Potter's total damage is " << damage(def, attack) << ".\n\n"; // output to play along

	setStrength(health); // sets creatures strength in creature class

	if (getStrength() < 1 && alive == true) {
	
		std::cout << "Harry Potter has been RESURRECTED!!!!\n\n"; // resurrects Harry Potter once
		life(); 

	}
	// std::cout << "HarryPotter's strength is " << getStrength() << ".\n\n"; // output for testing
	
	
}

/*********************************************************************
** Function: HarryPotter life()
** Description: resurrects Harry
** Parameters:  none
** Pre-Conditions:  def() alive = true
** Post-Conditions: def() 
** Citation:
*********************************************************************/

void HarryPotter::life() {

	setStrength(10); // reset strength
	alive = false; // set alive to false



}
