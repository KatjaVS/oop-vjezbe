#include "weapon.hpp"

using namespace std;

int main()
{
	int shoot_or_load = 0;
	Weapon Shotgun;
	
	cout << "Press 1 if you want to shoot or 3 if you want to reload" << endl;

	while(1)
	{
		cin >> shoot_or_load;

		if(shoot_or_load == 1)
			Shotgun.shoot();

		else if (shoot_or_load == 3)
		{
			if (Shotgun.reload())
				cout << "Gun is reloaded." << endl;
			else
			{
				cout << "You're out of ammo. THE END" << endl;
				break;
			}
				
		}
			
		else
			break;
	}
	

}

