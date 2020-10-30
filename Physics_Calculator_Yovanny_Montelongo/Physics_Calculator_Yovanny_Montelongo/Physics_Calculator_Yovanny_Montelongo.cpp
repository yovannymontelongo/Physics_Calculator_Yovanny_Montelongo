#include <iostream>
#include <stdlib.h>
#include <iomanip>
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

	double speed = 0.0;
	string speedUnit = "";
	double time = 0.0;
	string timeUnit = "";

	do {
		
		switch (chosenItem) {

		case 'a':
			cout << "----Calculate Velocity----\n";
			cout << "Enter the value of speed: \n";
			speed = validateDouble(speed);
			cout << "Enter the unit for speed: \n";
			speedUnit = validateString(speedUnit);
			cout << "Enter the value of time: \n";
			time = validateDouble(time);
			cout << "Enter the unit for time: \n";
			timeUnit = validateString(timeUnit);

			cout << "\nThe velocity for " << speed << "*" << time << " is: " << setprecision(4) << calculateVelocity(speed, time) << speedUnit << " / " << timeUnit;

			break;
		default:
			break;
		}

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