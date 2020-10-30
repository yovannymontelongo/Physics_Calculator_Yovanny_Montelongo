#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "Input_Validation_Extended.h"


using namespace std;

double calculateWeight(double mass) {
	return (mass * 9.81);
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
	//variables for momentum are being borrowed from acceleration to avoid recreating it
	//weight variables are being borrowed from newton's 2nd law to avoid recreating it

	do {
		
		switch (chosenItem) {

		//velocity was chosen
		case 'a':
			cout << "----Calculate Velocity----\n";
			cout << "Enter the value for distance as a double: ";
			distance = validateDouble(distance);
			cout << "Enter the unit for distance as a single word: ";
			distanceUnit = validateString(distanceUnit);
			cout << "Enter the value for time as a double: ";
			time = validateDouble(time);
			cout << "Enter the unit for time as a single word: ";
			timeUnit = validateString(timeUnit);

			cout << "\nThe velocity for " << distance << "/" << time << " is: " << fixed << setprecision(4) << calculateVelocity(distance, time) << " " << distanceUnit << " / " << timeUnit;

			break;
		//acceleration was chosen
		case 'b':
			cout << "----Calculate Acceleration----\n";
			cout << "Enter the value for velocity as a double: ";
			velocity = validateDouble(velocity);
			cout << "Enter the unit for velocity as a single word: ";
			velocityUnit = validateString(velocityUnit);
			cout << "Enter the value for time as a double: ";
			time = validateDouble(time);
			cout << "Enter the unit for time as a single word: ";
			timeUnit = validateString(timeUnit);

			cout << "\nThe velocity for " << velocity << "/" << time << " is: " << fixed << setprecision(4) << calculateAcceleration(velocity, time) << " " << velocityUnit << " / " << timeUnit;

			break;
		//motion was chosen
		case 'c':
			cout << "temporary menu c\n";
			break;
		//newton's 2nd law was chosen
		case 'd':
			cout << "----Calculate Newton's 2nd Law of Motion----\n";
			cout << "Enter the value for mass as a double: ";
			velocity = validateDouble(mass);
			cout << "Enter the unit for mass as a single word: ";
			velocityUnit = validateString(massUnit);
			cout << "Enter the value for acceleration as a double: ";
			time = validateDouble(acceleration);
			cout << "Enter the unit for time as a single word: ";
			timeUnit = validateString(accelerationUnit);

			cout << "\nThe velocity for " << mass << "/" << acceleration << " is: " << fixed << setprecision(4) << calculateNewton(mass, acceleration) << " " << massUnit << " / " << accelerationUnit;

			break;
		//weight chosen
		case 'e':
			cout << "----Calculate Weight(on Earth)----\n";
			cout << "Enter the value for mass as a double: ";
			velocity = validateDouble(mass);
			cout << "Enter the unit for mass as a single word: ";
			velocityUnit = validateString(massUnit);

			cout << "\nThe velocity for " << mass << "/" << "9.81 is: " << fixed << setprecision(4) << calculateWeight(mass) << " " << massUnit << " / m/s^2";

			break;
		//momentum was chosen
		case 'f':
			cout << "----Calculate Momentum----\n";
			cout << "Enter the value for mass as a double: ";
			velocity = validateDouble(mass);
			cout << "Enter the unit for mass as a single word: ";
			velocityUnit = validateString(massUnit);
			cout << "Enter the value for velocity as a double: ";
			time = validateDouble(velocity);
			cout << "Enter the unit for time as a single word: ";
			timeUnit = validateString(velocityUnit);

			cout << "\nThe velocity for " << mass << "/" << velocity << " is: " << fixed << setprecision(4) << calculateMomentum(mass, velocity) << " " << massUnit << " / " << velocityUnit;

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