#include "weapon.hpp"

void Weapon::shoot()
{
	if(current_bullets == 0 && ammunition > 0)
		cout << "The chamber is empty. Reload the gun." << endl;
	else
		current_bullets--;
}

int Weapon::reload() 
{
	ammunition -= (chamber - current_bullets);

	if (ammunition > 0)
		current_bullets = chamber;
	else
		return 0;	
}