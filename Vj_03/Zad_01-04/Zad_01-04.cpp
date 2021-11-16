#include "h_tri.hpp"
#include <iostream>
#include <vector>

using namespace std;

void output(const vector<int>& my_vect);
void input(vector<int>& my_vect, int size);

int main()
{
    int capacity = 1, start = 0, stop = 0, temp = 0;
    int ind = 0;
    size_t sz = 0;

    vector <int> mv;
    vector <int> r_vect;

    /* ** 2 ** */
    vector <int> mix_vect, first, second;
    size_t sz_1 = 0, sz_2 = 0;
    int cap = 1;

    /*  **  */

    cout << "Input vector size: ";
    cin >> sz;

    initialize_and_input(mv, &sz, &capacity);
    output(mv);

    cout << "Input range start and stop: ";
    cin >> start >> stop;

    if (start > stop)
    {
        temp = start;
        start = stop;
        stop = temp;
    }

    range_input(r_vect, &capacity, start, stop);
    output(r_vect);

    /*  2. Koristeci funkcije iz prvog zadatka unijeti dva vektora i formirati novi vektor koji
    se sastoji od elemenata iz prvog vektora koji nisu u drugom vektoru.    */

    cout << "Enter the first vector size: ";
    cin >> sz_1;
    initialize_and_input(first, &sz_1, &cap);

    cout << "Enter the second vector size: ";
    cin >> sz_2;
    initialize_and_input(second, &sz_2, &cap);

    cout << "Mixed vector:  ";
    form_new_vector(mix_vect, first, second);
    output(mix_vect);


    /*  3. Koristeci STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
      sumu svih elemenata iza najveceg elementa. */

    sort_vector(first);
    // salje predzadnji vektor


/*    4. Napisati funkciju u za uklanjanje elementa iz vektora sa sto manje operacija.
Poredak elemenata u vektoru nije bitan.   */

    cout << "\nInput the index of an element you want to erase: ";
    cin >> ind;

    erase_an_element(second, ind);
    // salje zadnji vektor

}