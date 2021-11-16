/*  1. Napisati funkciju koja ra?una najve?i i najmanji broj u nizu od n prirodnih
brojeva. Funkcija vra?a tražene brojeve pomo?u referenci.   */

#include <iostream>
using namespace std;

void smallest_largest(int* arr, int length, int& small, int& large);

int main()
{
    int *arr, arr_size = 0, small = 0, large = 0;
    cout << "Enter array size: ";
    cin >> arr_size;

    arr = (int*)malloc(arr_size * sizeof(int));

    cout << "Array input: \n";
    for (int i = 0; i < arr_size; i++)
        cin >> arr[i];

    small = arr[0];
    large = arr[0];

    smallest_largest(arr, arr_size, small, large);

    cout << "\nThe smallest array element is: " << small;
    cout << "\nThe largest array element is: " << large << endl;

    free(arr);
    return 0;
}

void smallest_largest(int* arr, int length, int& small, int& large)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > large) large = arr[i];
        if (arr[i] < small) small = arr[i];
    }
}

