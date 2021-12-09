#include "HangmanView.hpp"
#include "HangmanModel.hpp"
#include <iostream>

void View::print_hangman(Model hangman)
{
	switch (hangman.get_num_of_lives())
	{

		case 7:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /         " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 6:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 5:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |        |  " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 4:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |       /|  " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 3:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |       /|\\" << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 2:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |       /|\\" << endl;
			cout << "  |        |  " << endl;
			cout << "  |           " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;

		case 1:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |       /|\\" << endl;
			cout << "  |        |  " << endl;
			cout << "  |       /   " << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			break;
		case 0:
			cout << "   ___________" << endl;
			cout << "  |  /     |  " << endl;
			cout << "  | /      O  " << endl;
			cout << "  |       /|\\" << endl;
			cout << "  |        |  " << endl;
			cout << "  |       / \\" << endl;
			cout << "  |           " << endl;
			cout << "__|_____      " << endl;
			cout << endl << endl << "Game Over!";
			break;

		default:
			cout << "\nError" << endl;
			break;
		}

}


void View::used_letters_so_far(Model hangman) {

	string str = hangman.get_used_letters();

	cout << "Letters used: \n";
	for (int i = 0; i < (int)str.length(); i++) {
		cout << str.at(i) << "  ";
	}
	cout << endl << endl;
}


void View::progress(Model hangman) {

	cout << "Current progress:\n " << hangman.get_guessed_movie();

	cout << endl << endl;
}