#include <iostream>
#include <cstddef>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool is_target_hit(const double, const double, const double, const double, const double, const double, const double, const double, const double);


class Weapon	
{
	private:

		double shoot_x = 0.0, shoot_y = 0.0, shoot_z = 0.0;
		int chamber_size = 0;

	public:
		void shoot();
		void set_chamber_size(int);
		void reload();
		double get_weapon_y();
		double get_weapon_x();
		double get_weapon_z();
};

class Target {

	private:
		double min_x = 0.0, max_x = 0.0, min_y = 0.0, max_y = 0.0, min_z = 0.0, max_z = 0.0;
		bool state;

	public:
		void generate_target();
		double get_max_x();
		double get_min_x();
		double get_max_y();
		double get_min_y();
		double get_max_z();
		double get_min_z();
};


//int remove_duplicates(Target);