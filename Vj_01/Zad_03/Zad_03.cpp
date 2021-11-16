/*  3. Napisati iterativnu funkciju za traženje najve?eg i najmanjeg broja u nizu. */

#include <iostream>
using namespace std;

void find(int* arr, int* large, int* small, int n_elements);

int main()
{
    int arr[32], largest = 0, smallest = 0, i = 0, n_of_elements = 0;

    cout << "Input the numbers of the array" << endl;

    cout << "( -> If you want to stop input, enter -77)" << endl;

    while (i < 32 && arr[i - 1] != -77)
    {
        cin >> arr[i];
        i++;
        n_of_elements++;
    }

    i = 0;

    largest = arr[i];
    smallest = arr[i];

    find(arr, &largest, &smallest, n_of_elements);

    cout << "The largest array element is: " << largest << " and the smallest: " << smallest << "\n";

}

void find(int* arr, int* large, int* small, int n_elements)
{
    int i = 0;

    for (i; i < n_elements; i++)
    {
        if (arr[i] > *large)
            *large = arr[i];

        else if (arr[i] < *small && arr[i] != -77)
            *small = arr[i];

    }
}
