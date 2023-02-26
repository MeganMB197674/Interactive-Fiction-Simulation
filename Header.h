// Preprocessor directives
#pragma once
#include <string>
using namespace std;
using std::string;

// Function prototypes
string displayLoadout();
// Function that returns a character and takes two string arguments.
char getConflictOutcome(string weaponTaken, string userName);
// Function that returns nothing but takes a string and character argument.
void getHelp(string weaponTaken, char conflictChoice);
// Function that returns nothing.
void unlockDoor();
// Function that returns an integer and takes a string argument.
int saveCombatants(string weaponTaken);
// Function that returns nothing and takes an integer, string, and character as arguments.
void Stall(int hostageChoice, string weaponTaken, char conflictChoice, string userName);