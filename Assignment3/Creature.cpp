/*********************************************************************
** Program Filename : Creature CPP
** Author : Tyler Forrester
** Date : 7 / 18 / 2016
** Description : Abstract Class for Fantasy Game
** Input : Attacks
** Output : Losses
** Citations :
********************************************************************/

#include "Creature.hpp"
/*********************************************************************
** Function: Creature Constructor
** Description: Intializes Creature Strength and Armor seed random num
** generator. 
** Parameters: int Armor, int Strength
** Pre-Conditions: pick()
** Post-Conditions: battle()
** Citation:
*********************************************************************/

Creature::Creature(int arm, int str)
{
	seed(); // seed random number generator
	armor = arm; // set armor
	strength = str; // set str

}
/*********************************************************************
** Function: setStrength
** Description:  Sets Strength
** Parameters: int Strength
** Pre-Conditions: defense() and life()
** Post-Conditions: battle() main()
** Citation:
*********************************************************************/

void Creature::setStrength(int str)
{
	strength = str;

}
/*********************************************************************
** Function: getStrength
** Description:  gets Strength
** Parameters:
** Pre-Conditions: defense(), life(), battle()
** Post-Conditions: battle() main()
** Citation:
*********************************************************************/

int Creature::getStrength(void)
{
	return strength;
}
/*********************************************************************
** Function: getArmor
** Description:  gets Armor
** Parameters:
** Pre-Conditions: damage()
** Post-Conditions: damage()
** Citation:
*********************************************************************/
int Creature::getArmor(void)
{
	return armor;
}

/*********************************************************************
** Function: Creature damage()
** Description: Returns damage
** Parameters: int attack
** Pre-Conditions: battle() attack() def()
** Post-Conditions: def()
** Citation:
*********************************************************************/


int Creature::damage(int def, int attack)
{
	int tat = attack - def - getArmor(); // figures damage

	if (tat > 0) {

		return tat;  // returns damaged

	}

	else {

		return 0;  // damage negative returns 0 
	}

}
/*********************************************************************
** Function: play
** Description:  rolls x number of dies of x sides return the value
** Parameters: number of dies and number of sides
** Pre-Conditions: attack() and defense()
** Post-Conditions: battle(), defense()
** Citation:
*********************************************************************/


int Creature::play(int dies, int sides)
{
	int at = 0; // initializes variables
	setDivisor(sides); // sets number of sides
	for (int i = 0; i < dies; i++) // this determines number of dice rolls
	{ 
		at += roll(); // this sums those dice rolls
	}

	return at; // this returns dice rolls
}
