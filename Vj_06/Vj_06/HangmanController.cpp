#include "HangmanModel.hpp"
#include "HangmanController.hpp"

#include <string>

bool Controller::is_game_over(Model& hangman) {

	if (hangman.get_guessed_movie().compare(hangman.get_movie()) == 0) {
		hangman.set_game_state(true);
		cout << "You won!";
	}
	else if (hangman.get_num_of_lives() == 0) {
		hangman.set_game_state(true);
	}
	return hangman.get_game_state();
}
char Controller::input() {
	char temp;

	cout << "Enter a letter: ";
	cin >> temp;

	return tolower(temp);
}

void Controller::lives_state(Model& hangman, int newLives) {
	hangman.set_lives(newLives);

}
void Controller::check_letter(Model& hangman, View my_view) {

	bool is_letter_guessed = false;
	char letter = input();
	int lives = hangman.get_num_of_lives();
	string movie = hangman.get_movie();
	string guessed_movie = hangman.get_guessed_movie();
	string used = hangman.get_used_letters();

	used.push_back(letter);
	hangman.set_used_letters(used);

	//cout << movie;
	

	for (int i = 0; i < movie.length(); i++) {
		if (movie.at(i) == letter) {
			guessed_movie[i] = letter;
			is_letter_guessed = true;
		}
	}
	
	hangman.set_guessed_movie(guessed_movie);

	if (is_letter_guessed == false) {
		lives_state(hangman, lives - 1);

	}
	system("CLS");

	my_view.print_hangman(hangman);
	my_view.progress(hangman);
	my_view.used_letters_so_far(hangman);

	

}
