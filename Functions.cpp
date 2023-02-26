// Fetch file from the standard library to get input and output.
#include <iostream>
// Fetch file from the standard library to use strings.
#include <string>
// Fetch file from the standard library to use the sleep function.
#include <cstdlib>
// Fetch file from the standard library to use the pause function.
#include <windows.h>
// Employ using directive to use library files.
using namespace std;

// Write a function to get bag choice of player and display weapon given.
string displayLoadout() {
	// Declare LOCAL integer variable called bagChoice to hold the value of the bag the player chooses.
	int bagChoice;
	cout << "Please choose a bag: 1 = left, 2 = center, 3 = right." << endl;
	// Set the value of the bagChoice variable to the user's input.
	cin >> bagChoice;
	// Declare LOCAL string variable to hold the value of the weapon taken by user.
	string weaponTaken;
	// Line break
	cout << "\n";
	// Use a switch statement to output which bag the user has selected.
	switch (bagChoice) {
		// If the user chooses 1, they have chosen the combat knife.
	case 1:
		weaponTaken = "Combat Knife";
		cout << "You quickly snatch the combat knife." << endl;
		// Break out of the loop.
		break;
		// If the user chooses 2, they have chosen the Mac-10.
	case 2:
		weaponTaken = "Mac-10";
		cout << "You quickly snatch the Mac-10." << endl;
		// Break out of the loop.
		break;
		// If the user chooses 3, they have chosen the sniper rifle.
	case 3:
		weaponTaken = "Sniper Rifle";
		cout << "You quickly snatch the Sniper rifle." << endl;
		// Break out of the loop.
		break;
		// If the user has an invalid choice, kill them and end the program.
	default:
		cout << "You entered an invalid choice. You did not choose a weapon, and the cartel has eliminated you." << endl;
		
	}
	return weaponTaken;
}

// Write a function to calculate the conflict outcome based on weapon given to player.
char getConflictOutcome(string weaponTaken, string userName) {
	//Declare a variable called conflictChoice to hold the player's course of action from the options below.
	char conflictChoice;
	cout << "\n"; // Line break
	// Output to the screen
	cout << "A man rushes toward you from behind as you turn around. You must act quickly, so you --" << endl;
	cout << "\n";
	cout << "a = attempt a shot." << endl;
	cout << "b = throw your weapon at him." << endl;
	cout << "c = run like hell!" << endl;
	// Set conflict choice equal to the value of the user's input (Must be a character).
	cout << "\n";
	cin >> conflictChoice;
	cout << "\n";
	// Write a conditional statement to change the course of the game dependent on which conflict choice they made and which weapon they chose.
	// If the weapon taken is combat knife AND conflict choice is b.
	if (weaponTaken == "Combat Knife" && conflictChoice == 'b') {
		cout << "You throw your " + weaponTaken; cout << " and kill the enemy." << endl;
	}
	// Else if the weapon taken is mac-10 AND conflict choice is a.
	else if (weaponTaken == "Mac-10" && conflictChoice == 'a') {
		cout << "You pull your " + weaponTaken; cout << " and hipfire, sending a single but leathal bullet." << endl;
		cout << userName; cout << ", You're a decent shot!" << endl;
	}
	// Else if weapon taken is sniper rifle AND conflict choice is c.
	else if (weaponTaken == "Sniper Rifle" && conflictChoice == 'c') {
		cout << "You sling your monsterous rifle and run for the hills! A smart choice, as you will will live to see another sunrise." << endl;
	}
	// Else if weapon taken is combat knife AND conflict choice is a.
	else if (weaponTaken == "Combat Knife" && conflictChoice == 'a') {
		cout << "realizing that you brought a knife to a gunfight, you are fatally shot. Better choices could have been made." << endl;
	}
	// Else if weapon taken is combat knife OR mac-10 AND conflict choice is c.
	else if (weaponTaken == "Combat Knife" || "Mac-10" && conflictChoice == 'c') {
		cout << "Hm... Interesting choice. You've left your brothers and sisters to their death. They overcome the battle and kill you out of spite." << endl;
	}
	// Else print string.
	else {
		cout << "The weapon you have and strategy used gave you the disadvantage in battle. You were caught and killed by the Cartel." << endl;
	}
	return conflictChoice;
};

// If player has a sucessful weapon and conflict choice pairing, continue with story.
void getHelp(string weaponTaken, char conflictChoice) {
	if (weaponTaken == "Combat Knife" && conflictChoice == 'b' || weaponTaken == "Mac-10" && conflictChoice == 'a' || weaponTaken == "Sniper Rifle" && conflictChoice == 'c')
	{
		cout << "\n";
		cout << "Frantic, you run to the comms building to alert nearby reinforcements of the attack." << endl;
		cout << "You reach to open the door, but find it is locked!" << endl;
		cout << "Time is of the essence now, you must hack the security system's pin and call for help!" << endl;
	}
};

// Write function to unlock the comms building.
void unlockDoor() {
	cout << "\n";
	cout << "You reach into your duffel bag and find that you also have a bypass module." << endl;
	cout << "\n";
	// Have the system pause until the player presses a key.
	system("pause");
	cout << "\n";
	cout << "Attempting pin bypass." << endl;
	// Declare integer variable called attempt.
	int attempt;
	// set attempt equal to 197665 and while attempt is less than 197674, increment it.
	//I've added the + 1 so that the program displays 197674.
	for (attempt = 197665; attempt < 197674 + 1; attempt++) {
		// Pause for one second between each attempt.
		Sleep(1000);
		// Print the current value of attempt.
		cout << attempt << endl;
		// If attempt is equal to 197674, print that access is granted.
		if (attempt == 197674) {
			cout << "\n";
			cout << "Access granted" << endl;
		}
	}
}

// Write a function to save your team.
int saveCombatants(string weaponTaken) {
	int hostageChoice;
	cout << "1 - Give your general the signal to break free and attack them." << endl;
	cout << "2 - Lay down your arms and negotiate with them. Maybe you can stall until backup arrives." << endl;
	cout << "\n";
	cin >> hostageChoice;
	cout << "\n";

	if (hostageChoice == 1) {
		cout << "Your general reaches for the soldier's gun behind him. He is swiftly socked with the butt, laid out, and shot." << endl;
		cout << "Disgusted, the Cartel members eliminate the remaining soldiers and you are in the process killed." << endl;
	}
	else if (hostageChoice == 2) {
		cout << "You lay down your " + weaponTaken << " and offer to talk with their boss." << endl;
	}
	else {
		cout << "invalid choice." << endl;
	};
	return hostageChoice;
}

void Stall(int hostageChoice, string weaponTaken, char conflictChoice, string userName ) {
	if (hostageChoice == 2 && weaponTaken == "Combat Knife" && conflictChoice == 'b' || hostageChoice == 2 && weaponTaken == "Mac-10" && conflictChoice == 'a') {
		cout << "You shakily ramble about your personal life and reassure their boss that you and your team will clear the area if he is to let you go." << endl;
		cout << "However, he interrupts you:" << endl;
		cout << "\n";
		cout << "You sure know how to use that " + weaponTaken << ", don't you " + userName << "?" << endl;
		cout << "Your boys sold you out, now you're my problem." << endl;
		cout << "\n";
		cout << "Their boss raises his rifle, but before he gets a shot, agents approach from behind nearby buildings, guns raised." << endl;
		cout << "An agent lifts his visor and winks at you. He nods and tells you 'we've got you, " + userName << "." << endl;
	}
	else if (hostageChoice == 2 && weaponTaken == "Sniper Rifle" && conflictChoice == 'c') {
		cout << "Their boss chuckles, 'you English folks really make it too easy for us.'" << endl;
		cout << "'I saw you run away, " + userName << ". Smart move not to mess with the Cartel." << endl;
		cout << "\n";
		cout << "You taunt him and continue to falsely justify your team to pass time." << endl;
		cout << "Suddenly, men rush out from behind nearby buildings with their guns raised. The Cartel are surrounded, forcing their surrender." << endl;
		cout << "An agent lifts his visor and winks at you. He nods and tells you 'we've got you, " + userName << ".'" << endl;
	}
}
