#include "classes.hpp"

void Point::set_coord_values(double x, double y, double z)
{
	x_coord = x;
	y_coord = y;
	z_coord = z;
}


void Point::rand_range_coord(const int lower, const int upper)
{
	srand(time(NULL));
	x_coord = double(lower + rand() % ((upper + 1) - lower));
	y_coord = double(lower + rand() % ((upper + 1) - lower));
	z_coord = double(lower + rand() % ((upper + 1) - lower));

}


double Point::get_value_x() {
	return x_coord;
}

double Point::get_value_y() {
	return y_coord;
}

double Point::get_value_z() {
	return z_coord;
}


void Point::distance_in_2D_space(double x, double y, double &distance_2D)
{
	// sqrt((x2 - x1)^2 + (y2 - y1)^2
	distance_2D = sqrt(pow(x - x_coord, 2) + pow(y - y_coord, 2));
}


void Point::distance_in_3D_space(double x, double y, double z, double& distance_3D)
{
	// sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2)
	distance_3D = sqrt(pow(x - x_coord, 2) + pow(y - y_coord, 2) + pow(z - z_coord, 2));
}
