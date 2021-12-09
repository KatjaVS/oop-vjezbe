#include <iostream>
#include <cstddef>
#include <vector>
#include <string>
#include <time.h>
#include <fstream>

#pragma once

using namespace std;

class Model
{
	private:
	
		int lives =7;

		string movie = "";
		string used_letters = "";
		string guess = "";
	
		bool game_state = false;

	public:

		string get_movie();
		string get_guessed_movie();
		string get_used_letters();
		int get_num_of_lives();
		bool get_game_state();

		void set_movie(string);
		void set_guessed_movie(string);
		void set_used_letters(string);
		void set_lives(int);
		void set_game_state(bool);

		void generate_movie();
};