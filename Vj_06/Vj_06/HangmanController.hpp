#ifndef CONTROLLER_HEADER
#define CONTROLLER_HEADER

#include"HangmanView.hpp"

class Controller
{
	public:
		bool is_game_over(Model& hangman);
		void check_letter(Model& hangman, View);
		char input();
		void lives_state(Model&, int);

};

#endif // !CONTROLLER_HEADER