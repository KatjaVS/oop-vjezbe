#include <iomanip>
#include "classes.hpp"

int main()
{
    int lower_range = 0, upper_range = 0, temp = 0;
	double x = 0.0, y = 0.0, z = 0.0, distance_2D = 0.0, distance_3D;

	Point first_coord, random_coord;

	cout << "Enter x, y and z of the first coordinate: ";
	cin >> x >> y >> z;

	cout << "Enter lower range for the random coordinate: ";
	cin >> lower_range;

	cout << "Enter upper range for the random coordinate: ";
	cin >> upper_range;

	if(lower_range > upper_range)
	{
		temp = upper_range;
		upper_range = lower_range;
		lower_range = temp;
	}

	first_coord.set_coord_values(x, y, z);
	random_coord.rand_range_coord(lower_range, upper_range);

	cout << "\nInput coordinate is: ";
	cout << first_coord.get_value_x() << " " << first_coord.get_value_y() << " " << first_coord.get_value_z() << " " << endl;
	cout << "\nRandomly generated coordinate is: ";
	cout << random_coord.get_value_x() << " " << random_coord.get_value_y() << " " << random_coord.get_value_z() << " " << endl;

	first_coord.distance_in_2D_space(random_coord.get_value_x(), random_coord.get_value_y(), distance_2D);
	first_coord.distance_in_3D_space(random_coord.get_value_x(), random_coord.get_value_y(), random_coord.get_value_z(), distance_3D);

	cout << "\n2D distance of the input and random coordinates is: " << setprecision(5) << distance_2D << endl;
	cout << "3D distance of these coordinates is: " << setprecision(5) << distance_3D << endl;

}