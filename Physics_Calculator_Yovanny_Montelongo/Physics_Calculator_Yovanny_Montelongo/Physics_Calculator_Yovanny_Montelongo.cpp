#include <iostream>
#include <stdlib.h>
#include "Input_Validation_Extended.h"


using namespace std;

double calculateWeight(double mass, string unit) {
	return (mass * 9.80665);
}

double calculateMomentum(double mass, double velocity) {
	return (mass * velocity);
}

double calculateNewton(double mass, double acceleration) {
	return (mass * acceleration);
}

double calculateVelocity(double speed, double time) {
	return (speed * time);
}

double calculateAcceleration(double velocity, double time) {
	return (velocity * time);
}

void submenu(char chosenItem) {
	do {
		
		cout << chosenItem << " was chosen\n";
		cout << "to exit, enter 'x' or 'X'\n";
		chosenItem = validateChar(chosenItem);

	} while (chosenItem != 'x' && chosenItem != 'X');
}

int main(){

	char menuSelectionChosen = 'z';

	do {

		cout << "----HOME MENU----\n";
		cout << "a) Calculate Velocity\n";
		cout << "b) Calculate Acceleration\n";
		cout << "c) Calculate Motion\n";
		cout << "d) Calculate Newton's 2nd Law of Motion\n";
		cout << "e) Calculate Weight (on Earth)\n";
		cout << "f) Calculate Momentum\n";

		cout << "to exit, enter 'x' or 'X'\n";
		menuSelectionChosen = validateChar(menuSelectionChosen);

		switch (menuSelectionChosen) {
			case 'a':
				submenu('a');
				break;
			case 'b':
				submenu('b');
				break;
			case 'c':
				submenu('c');
				break;
			case 'd':
				submenu('d');
				break;
			case 'e':
				submenu('e');
				break;
			case 'f':
				submenu('g');
				break;
			default:
				system("cls");
				break;
		}


		system("cls");

	} while (menuSelectionChosen != 'x' && menuSelectionChosen != 'X');

	system("cls");

	return 0;
}