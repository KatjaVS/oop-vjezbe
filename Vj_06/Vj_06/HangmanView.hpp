#ifndef VIEW_HEADER
#define VIEW_HEADER

#include "HangmanModel.hpp"

class View
{
	private: 

	public:
		void print_hangman(Model hangman);
		void used_letters_so_far(Model hangman);
		void progress(Model hangman);

}; 

#endif