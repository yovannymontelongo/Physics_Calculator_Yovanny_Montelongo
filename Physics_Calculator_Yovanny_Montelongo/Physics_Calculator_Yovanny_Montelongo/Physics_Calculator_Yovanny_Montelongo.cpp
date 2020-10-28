#include <iostream>
#include <stdlib.h>
#include "Input_Validation_Extended.h"


using namespace std;

char menuSystem(char chosenItem) {

	do {

		cout << "----Submenu " << chosenItem << "----\n";
		cout << "you chose menu " << chosenItem << "\n";

		char input = 'z';
		cout << "to exit, enter 'e' or 'E'\n";
		chosenItem = validateChar(input);

	} while (chosenItem != 'e' && chosenItem != 'E');

	return chosenItem;
}

int main(){

	char menuSelectionChosen = 'z';

	do {

		cout << "----HOME MENU----\n";
		cout << "a) enter menu a\n";
		cout << "b) enter menu b\n";

		char input = 'z';
		cout << "to exit, enter 'e' or 'E'\n";
		menuSelectionChosen = validateChar(input);

		switch (menuSelectionChosen) {
			case 'a':
				menuSystem(menuSelectionChosen);
				break;
			case 'b':
				menuSystem(menuSelectionChosen);
				break;
			default:
				system("cls");
				break;
		}


		system("cls");

	} while (menuSelectionChosen != 'e' && menuSelectionChosen != 'E');

	system("cls");

	return 0;
}