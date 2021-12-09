#include "HangmanModel.hpp"
#include "HangmanView.hpp"
#include "HangmanController.hpp"
#include <iostream>

int main()
{
	Model hangman;
	View my_view;
	Controller controller;


	hangman.generate_movie();
	my_view.print_hangman(hangman);

	while (controller.is_game_over(hangman) != true) 
	{
		controller.check_letter(hangman, my_view);
	}
}