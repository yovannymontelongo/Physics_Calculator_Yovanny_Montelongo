#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "Input_Validation_Extended.h"


using namespace std;

double calculateWeight(double mass) {
	return (mass * 9.80665);
}

double calculateMomentum(double mass, double velocity) {
	return (mass * velocity);
}

double calculateNewton(double mass, double acceleration) {
	return (mass * acceleration);
}

double calculateVelocity(double distance, double time) {
	return (distance / time);
}

double calculateAcceleration(double velocity, double time) {
	return (velocity / time);
}

void submenu(char chosenItem) {

	//variables for velocity
	double distance = 0.0;
	string distanceUnit = "";
	double time = 0.0;
	string timeUnit = "";
	//variables for acceleration
	double velocity = 0.0;
	string velocityUnit = "";
	//time variables are being borrowed from velocity to avoid recreating it
	//variables for newton's 2nd law of motion
	double mass = 0.0;
	string massUnit = "";
	double acceleration = 0.0;
	string accelerationUnit = "";
	//variables for momentum
	//mass variables are being borrowed from newton's 2nd law to avoid recreating it
	double velocity = 0.0;
	string velocityUnit = "";
	//weight variables are being borrowed from newton's 2nd law to avoid recreating it

	do {
		
		switch (chosenItem) {

		//velocity was chosen
		case 'a':
			cout << "----Calculate Velocity----\n";
			cout << "Enter the value for distance: ";
			distance = validateDouble(distance);
			cout << "Enter the unit for distance: ";
			distanceUnit = validateString(distanceUnit);
			cout << "Enter the value for time: ";
			time = validateDouble(time);
			cout << "Enter the unit for time: ";
			timeUnit = validateString(timeUnit);

			cout << "\nThe velocity for " << distance << "/" << time << " is: " << fixed << setprecision(4) << calculateVelocity(distance, time) << " " << distanceUnit << " / " << timeUnit;

			break;
		//acceleration was chosen
		case 'b':
			cout << "----Calculate Acceleration----\n";
			cout << "Enter the value for velocity: ";
			velocity = validateDouble(velocity);
			cout << "Enter the unit for velocity: ";
			velocityUnit = validateString(velocityUnit);
			cout << "Enter the value for time: ";
			time = validateDouble(time);
			cout << "Enter the unit for time: ";
			timeUnit = validateString(timeUnit);

			cout << "\nThe velocity for " << velocity << "/" << time << " is: " << fixed << setprecision(4) << calculateVelocity(velocity, time) << " " << velocityUnit << " / " << timeUnit;

			break;
		default:
			break;
		}

		cout << "\nEnter 'x' or 'X' to continue: ";
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