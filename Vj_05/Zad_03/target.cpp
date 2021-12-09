#include "target.hpp"

bool is_target_hit(const double shoot_x, const double shoot_y, const double shoot_z, const double max_x, const double min_x, const double max_y, const double min_y, const double max_z, const double min_z)
{
	//return ((shoot_x <= max_x && shoot_x >= min_x) && (shoot_x <= max_y && shoot_y >= min_y) && (shoot_z <= max_z && shoot_z >= min_z));
	return((min_x <= shoot_x && shoot_x <= max_x) && (min_y <= shoot_y && shoot_y <= max_y) && (min_z <= shoot_z && shoot_z <= max_z));
}


void Weapon::shoot() 
{

	shoot_z = (double)rand() / RAND_MAX * 10.0;
	shoot_x = (double)rand() / RAND_MAX * 10.0;
	shoot_y = (double)rand() / RAND_MAX * 10.0;
}

void Weapon::set_chamber_size(int n) {
	chamber_size = n;
}

void Target::generate_target() 
{
	
	//double diagonal = 0.0, a = 0.0, volume = 0.0;
	//diagonal = sqrt(((max_x - min_x) ^ 2) + ((max_y - min_y) ^ 2) + ((max_z - min_z) ^ 2));
	//volume = pow(diagonal, 3) / (3 * sqrt(3));
	min_x = (double)rand() / RAND_MAX * 5.0;
	min_y = (double)rand() / RAND_MAX * 5.0;
	min_z = (double)rand() / RAND_MAX * 5.0;
	max_x = (double)rand() / RAND_MAX * 100.0;
	max_y = (double)rand() / RAND_MAX * 100.0;
	max_z = (double)rand() / RAND_MAX * 100.0;


}

double Target::get_max_x() { 
	return max_x;
}
double Target::get_max_y() {
	return max_y;
}
double Target::get_max_z() {
	return max_z;
}
double Target::get_min_x() {
	return min_x;
}
double Target::get_min_y() {
	return min_y;
}
double Target::get_min_z() {
	return min_z;
}



double Weapon::get_weapon_x() { 
	return shoot_x; 
}
double Weapon::get_weapon_y() {
	return shoot_y; 
}
double Weapon::get_weapon_z() {
	return shoot_z;
}

/*
int remove_duplicates(vector <Target> &vect)
{
	vector <Target> temp;
	temp.at(0) = vect.at(0);
	int cnt = 0, final = 0;


	for (int i = 1; i < vect.size(); i++)
	{
		for (int j = 2; j < vect.size(); j++)
		{
			if ((vect[i].get_max_x() == vect[j].get_max_x()) && (vect[i].get_min_z() == vect[j].get_min_z()))
				cnt++;
		}
		if (cnt > 1)
			final++;
	}

	return final;
}
*/
