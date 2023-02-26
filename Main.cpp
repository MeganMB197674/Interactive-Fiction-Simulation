/* Megan Boyer
CSC215 Interactive Fiction Assignment
2/17/2023 */

// Fetch file from the standard library to get input and output and file to use strings.
#include <iostream>
// Fetch files from the standard library to use strings.
#include <string.h>
#include <string>
// Fetch header file. //JC - only include .h files!!!     
#include "Header.h"
// Employ using directive to use library files.
using namespace std;

// Declare global variable to hold user's name.
string userName;

// Main funtion and starting point of the program.
int main() {
	// Output to the screen using cout.
	cout << "For the best experience, please enable full-screen." << endl;
	cout << "\n";
	cout << "To begin this simulation, please provide us with your first name:" << endl;
	// Get user input (user's name) and set variable userName equal to the input.
	cin >> userName;
	// line break.
	cout << "\n";
	// Output to the screen and concatenate to display the value of userName.
	cout << "Welcome to the warzone, " + userName; cout << "."; cout << endl;
	cout << "The year is 2025. You are a Special Ops soldier for the UK government, asleep at the mobile base on the border of Mexico." << endl; 
	cout << "\n";
	cout << "Suddenly, someone hurriedly shoves you awake." << endl;
	cout << "Shots ricochet off of nearby structures and intense shouting can be heard in the distance." << endl;
	cout << "Your general cries 'Get up " + userName; cout << "!", cout << " They've found us.'" << endl;
	cout << "\n";  // Multiple line breaks for better UX.
	cout << "\n";
	cout << "In a sleepy daze, you limp to the weapon supply tent and are presented with a number of loadout options:" << endl;
	cout << "\n";
	cout << "The duffel bag on your left contains a combat knife." << endl;
	cout << "The bag in the center contains a Mac-10 submachine gun." << endl;
	cout << "The bag to your right contains a .50 cal sniper rifle." << endl;
	cout << "\n";

	string weapon;
	// Call function to display weapon given to player.
	weapon = displayLoadout();
	// Declare variable
	char conflictChoice;
	//set variable equal to what the function 'getConflictOutcome' returns.
	conflictChoice = getConflictOutcome(weapon, userName); 
	// Call function to get help if player survived.
	getHelp(weapon, conflictChoice);
	// Call function to unlock the comms building door.
	unlockDoor();
	cout << "\n";
	cout << "You have reached the comms building and have successfully sent a call for backup to the area." << endl;
	cout << "The base, however, is still under attack." << endl;
	cout << "\n";
	cout << "You carefully sweep through the base looking for your team, and just as you round the corner, your heart sinks." << endl;
	cout << "What's left of your team is kneeling on their knees in the dirt. 15 men armed with assualt rifles hold the barrels to their heads." << endl;
	cout << "Backup is on the way, but how long can they wait? You ask yourself." << endl;
	cout << "\n";
	cout << "You slowly walk out with your hands up. Guns are drawn to you immediately." << endl;
	cout << "A single man walks towards you from the group - you presume he is their boss." << endl;
	cout << "Your survival instincts kick in and you --" << endl;
	cout << "\n";
	int hostageChoice;
	hostageChoice = saveCombatants(weapon);
	cout << "\n";
	Stall(hostageChoice, weapon, conflictChoice, userName);
	cout << "\n";
	// Game end.
	cout << "\n";
	cout << "Game over, " + userName; cout << "."; cout << " Thank you for playing!";
	cout << "\n";
	// End program.
	return 0;
}