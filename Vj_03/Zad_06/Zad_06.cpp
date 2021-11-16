/*  6. Napisite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
svaki string preokrene te sortira vektor po preokrenutim stringovima */

#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>

using namespace std;

void funct_vect(vector <string> &vect_str);

int main()
{
    vector <string> vect_str;
    funct_vect(vect_str);
}

void funct_vect(vector <string> &vect_str)
{
    string temp, temp2;
    int i = 0, n = 0, new_capacity = 1, j = 0;
    
    cout << "Enter the number of strings: ";
    cin >> n;
    new_capacity = n*2;
    vect_str.reserve(new_capacity);
    
    cin.ignore(1,'\n');
    for(; i < n; i++)
    {
        cout << "Enter " << i << ". string: ";    
        getline(cin, temp);

        reverse(temp.begin(), temp.end());

        vect_str.push_back(temp);
    }

    sort(vect_str.begin(), vect_str.end());
    
    for(i = 0; i < vect_str.size(); i++)
        cout << vect_str.at(i) << " ";
}
