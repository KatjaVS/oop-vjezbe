#include "target.hpp"

int main()
{
    srand((unsigned)time(NULL));
    int num_of_targets = 0, cnt = 0, chamber = 12, vect_size = 0;
    bool check = false;

    vector <Target> targets;
    vector <Target> hit_targets;
    Weapon shotgun;

    cout << "Enter the number of targets: ";
    cin >> num_of_targets;
    
    for (int j = 0; j < num_of_targets; j++)
    {
        Target temp_target;
        temp_target.generate_target();
        targets.push_back(temp_target);
    }
  


    for (int i = 0; i < chamber; i++) {
        
        shotgun.shoot();

        for (int k = 0; k < num_of_targets; k++)
        {
            if (is_target_hit(shotgun.get_weapon_x(), shotgun.get_weapon_y(), shotgun.get_weapon_z(), targets[k].get_max_x(), 
                targets[k].get_max_y(), targets[k].get_max_z(), targets[k].get_min_x(), targets[k].get_min_y(), targets[k].get_min_z()))
            {
                hit_targets.push_back(targets[k]);
            }
        }        
    }

    vect_size = hit_targets.size();
    
    for (int j = 0; j < hit_targets.size(); j++)
    {
      
        for (int k = 1; k < hit_targets.size(); k++)
        {
            if ((hit_targets[j].get_max_x() == hit_targets[k].get_max_x()) && (hit_targets[j].get_min_z() == hit_targets[k].get_min_z()))
            {
                hit_targets.erase(hit_targets.begin() + k);
                vect_size--;
            }
        }

        if (j == vect_size)
            break;
    }
       
    
    cout << "\n\nThe number of hit targets is:    " << vect_size;
}