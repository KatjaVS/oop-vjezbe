#include "HangmanModel.hpp"

string Model::get_movie() { 
	return movie; 
}

string Model::get_guessed_movie() { 
	return guess;
}

string Model::get_used_letters() {
	return used_letters; 
}

int Model::get_num_of_lives() {
	return lives; 
}

bool Model::get_game_state() {
	return game_state;
}

void Model::set_movie(string newMovie) {
	movie = newMovie;
}
void Model::set_guessed_movie(string newMovie) {
	guess = newMovie;
}
void Model::set_used_letters(string newMovie) {
	used_letters = newMovie;
}
void Model::set_lives(int newLives) {
	lives = newLives;
}
void Model::set_game_state(bool state) {
	game_state = state;
}
void Model::generate_movie() {

	ifstream movie_file("movie.txt");
	srand(time(NULL));

	int i = 0;

	vector <string> movies;
	string temp_movie;
	

	while (getline(movie_file, temp_movie)) {
		movies.push_back(temp_movie);
	}

	i = rand() % movies.size();
	temp_movie = movies[i];

	for (i = 0; i < temp_movie.length(); i++) {
		if (temp_movie[i] == ':' && temp_movie[i] == '\'' && temp_movie[i] == '-')
		{
			continue;
		}
		else if (temp_movie[i] == ' ') {
			movie.push_back(' ');
			guess.push_back(' ');
		}
		else {
			movie.push_back(tolower(temp_movie[i]));
			guess.push_back('_');
		}
	}

}

