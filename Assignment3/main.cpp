/*********************************************************************
** Program Filename : Assignment 3
** Author : Tyler Forrester
** Date : 7 / 24 / 2016
** Description : A fantasy game 
** Input : user Input
** Output : Battles between nums
** Citations: 
*********************************************************************/


#include "Reptile.hpp"
#include "InputValid.hpp"
#include "Medusa.hpp"
#include "Gollum.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include <string>

using std::cout;
using std::endl;


int main() {
	void displayMenu(string);
	int getChoice(InputValid);
	void continueOn(InputValid);	
	int choice;
	InputValid valid = InputValid();// creates validation
	Creature* pick(int choice, InputValid valid);
	bool battle(Creature * fighter1, Creature * fighter2, InputValid valid);
	
	


	do {



		cout << "\nWelcome to Assignment 3. Please select two Creatures to Battle\n"; 
		displayMenu("Player 1");
		choice = getChoice(valid);
		if (choice == 6) {

			break;   // Quit game on six
		}
		
		Creature * fighter1 = pick(choice, valid); // get fighter 1 
		
		displayMenu("Player 2");
		choice = getChoice(valid);

		if (choice == 6) {

			break;  // Quit Game on six
		}

		Creature * fighter2 = pick(choice, valid); // get fighter 2 
		cout << "You are ready for battle." << endl;
		continueOn(valid);
			
		while (battle(fighter1, fighter2, valid) == true) {

			continueOn(valid); // continue Battling until one creature has strength less than 0
		
		}

		continueOn(valid);


	} while (true); 
	

	return 0;

} 

/*********************************************************************
** Function: displayMenu
** Description: Displays Menu of Options
** Parameters: void
** Pre-Conditions: Start of Program
** Post-Conditions: getChoice()
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


void displayMenu(string player) {


	cout <<"Please Select a " << player << "\n\n";
	cout << "1. Reptile\n";
	cout << "2. Medusa\n";
	cout << "3. Gollum\n";
	cout << "4. BlueMen\n";
	cout << "5. HarryPotter\n";
	cout << "6. Quit the Program\n\n";


}
/*********************************************************************
** Function:  getChoice
** Description: gets number of Choice
** Parameters:  InputValid
** Pre-Conditions: DisplayMenu()
** Post-Conditions: Switch and Array Entry
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


int getChoice(InputValid valid) {
  
	int choice;
	choice = valid.validateInt();
	while (choice < 1 || choice > 6) {

		cout << "The only valid choices are 1 - 6. Please re-enter.\n";
		choice = valid.validateInt();

	}

	return choice;



}


/*********************************************************************
** Function:  continueOn
** Description: Pauses program after tasks
** Parameters: InputValid
** Pre-Conditions: switch case 1, case 2 and case 3
** Post-Conditions: displaymenu()
** Citation:
*********************************************************************/

void continueOn(InputValid valid) {
	char entry = '0';
	do {


		cout << "Please enter 'c' to continue.\n";
		entry = valid.validateChar();



	} while (entry != 'c');

}
/*********************************************************************
** Function:  pick
** Description : selects creature
** Parameters : InputValid, choice
** Pre - Conditions : main() getchoice() displaymenu()
** Post - Conditions: battle() main()
** Citation :
**********************************************************************/

Creature* pick(int choice, InputValid valid) {
	
	
		switch (choice)
		{
		case 1: {
			Creature * fighter = new Reptile(); // returns reptile
			cout << "You have selected a Reptile!\n" << std::endl;  
			continueOn(valid);
			return fighter; 
			
		}
		case 2: {
			Creature * fighter = new Medusa(); // returns Medusa
			cout << "You have selected Medusa!\n" << std::endl;
			continueOn(valid);
			return fighter;
			
		}
		case 3: {
			Creature * fighter = new Gollum(); // returns Gollum
			cout << "You have selected Gollum!\n" << std::endl;
			continueOn(valid);
			return fighter;
			
		}
		case 4: {
			Creature * fighter = new BlueMen(); // returns Bluemen
			cout << "You have selected BlueMen!\n" << std::endl;
			continueOn(valid);
			return fighter;
			
		}
		case 5: {
			Creature * fighter = new HarryPotter(); // returns Harry Potter
			cout << "You have selected Harry Potter!\n" << std::endl;
			continueOn(valid);
			return fighter;
		
		}

		}


		cout << "returning to main menu. " << endl << endl;

	



}
/*********************************************************************
** Function:  battle
** Description : Two creatures battle to the DEATH.
** Parameters : InputValid, Creature *, Creature *
** Pre - Conditions : main() getchoice() displaymenu() pick()
** Post - Conditions:main()
** Citation :
**********************************************************************/

bool battle(Creature * fighter1, Creature * fighter2, InputValid valid) {


		cout << "Before the round Player 1's strength is " << fighter1->getStrength() << ". Player 2's strength is " << fighter2->getStrength() << ".\n\n"; //Dialog

		cout << "Player 1's ATTACK!!" << std::endl; // whose attack
		fighter2->defense(fighter1->attack());

		if (fighter2->getStrength() > 0) { // only executes if player 2 is not dead
			cout << "Player 2's ATTACK!!" << std::endl; // whose attack
			fighter1->defense(fighter2->attack()); // Player 2 attacks Player 1

		}
		else { // if player 2 dead then player 1 won. 

			cout << "Player 1 HAS WON!!" << std::endl;

			delete fighter1;
			delete fighter2;
			return false; 
	

		}
		if (fighter1->getStrength() < 1) { // if player 1 dead than player 2 win 

			cout << "Player 2 HAS WON!!!" << std::endl;
			delete fighter1;
			delete fighter2;
			return false; 
			

		}
		cout << "After the round Player 1 strength is " << fighter1->getStrength() << ". Player's 2 strength is " << fighter2->getStrength() << ".\n"; // Score Keeping
		return true;


}