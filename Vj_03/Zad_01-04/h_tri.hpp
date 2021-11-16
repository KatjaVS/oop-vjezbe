#include <iostream>
#include <cstddef>
#include <vector>
#include <algorithm>

using namespace std;

void initialize_and_input(vector<int>& my_vect, size_t* size, int* capacity)
{
    int inp;

    if (*size == 0)
        my_vect.reserve(1);

    else {
        *capacity *= *size * 2;

        my_vect.reserve(*capacity);

        for (int i = 0; i < *size; i++)
        {
            cout << i + 1 << ". elem: ";
            cin >> inp;
            my_vect.push_back(inp);
        }
    }
    cout << endl;
}


void output(const vector<int>& my_vect)
{
    for (int i = 0; i < my_vect.size(); i++)
        cout << my_vect[i] << " ";
    cout << endl;
}


void range_input(vector<int>& my_vect, int* capacity, int start, int stop)
{
    int v_size = 0;

    *capacity = 1;

    cout << "Input vector size: ";
    cin >> v_size;

    int* temp, cnt = 0;

    if (v_size == 0)
        temp = new int[1];

    else {

        temp = new int[v_size];

        for (int i = 0; i < v_size; i++)
        {
            cout << i + 1 << ". elem: ";
            cin >> temp[i];

            if (temp[i] > start && temp[i] < stop)
                cnt++;
            else
                break;

        }
        *capacity *= 2;
        my_vect.reserve(*capacity);

        for (int i = 0; i < cnt; i++)
            my_vect.push_back(temp[i]);
    }
    cout << endl;
    delete[] temp;
}


void form_new_vector(vector <int>& main_vect, const vector <int>& first, const vector <int>& second)
{
    int i = 0, j = 0, cnt = 0;

    for (; i < first.size(); i++, j++)
    {
        cnt = 0;

        for (j = 0; j < second.size(); j++)
        {
            if (first[i] == second[j])
                cnt++;
        }

        if (cnt == 0)
            main_vect.push_back(first[i]);
    }
}


void sort_vector(vector <int>& vect)
{
    int i = 0, sum = 0, largest = 0, smallest = 0;

    largest = *max_element(vect.begin(), vect.end());
    while (vect.at(i) != largest)
        i++;

    smallest = *min_element(vect.begin(), vect.end());

    i += 1;
    if (largest == vect.back())
        sum = 0;
    else
    {
        for (; i < vect.size(); i++)
        {
            sum += vect.at(i);
        }
    }

    cout << "\nThe sum of elements after the largest one (" << largest << ") is: " << sum;

    i = 0;
    while (vect.at(i) != smallest)
        i++;

    vect.insert(vect.begin() + i, 0);

    cout << "\nVector with the inserted 0: ";
    for (i = 0; i < vect.size(); i++)
        cout << vect.at(i) << " ";

    sort(vect.begin(), vect.end());
    cout << "\nSorted vector is: ";
    for (i = 0; i < vect.size(); i++)
        cout << vect.at(i) << " ";
}


void erase_an_element(vector <int>& vect, int el)
{
    if (vect.at(el) == vect.front())
        vect.erase(vect.begin());

    else if (vect.at(el) == vect.back())
        vect.erase(vect.end() - 1);

    else
        vect.erase(vect.begin() + el);

    for (int i = 0; i < vect.size(); i++)
        cout << vect.at(i) << " ";

    cout << "\n";
}