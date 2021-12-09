#include <iostream>
#include <cstddef>
#include <time.h>
#include <cmath>

using namespace std;

class Point {

	private:
		double x_coord, y_coord, z_coord;	

	public:
		void set_coord_values(double, double, double);
		void rand_range_coord(int, int);
		double get_value_x();
		double get_value_y();
		double get_value_z();
		void distance_in_2D_space(double, double, double&);
		void distance_in_3D_space(double, double, double, double&);

};
