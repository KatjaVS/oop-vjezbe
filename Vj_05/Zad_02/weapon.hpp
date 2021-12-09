#include <iostream>
#include <cstddef>

using namespace std;

class Weapon
{
	private:
		int chamber = 6, current_bullets = 6, ammunition = 12;

	public:
		void shoot();
		int reload();
};