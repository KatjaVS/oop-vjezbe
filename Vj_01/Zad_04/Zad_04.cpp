/* 4. Napisati rekurzivnu funkciju za traženje najve?eg i najmanjeg broja u nizu */

#include <iostream>
using namespace std;

int function(int* arr, int* largest, int* smallest, int n_elem);

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

    largest = arr[0];
    smallest = arr[0];

    function(arr, &largest, &smallest, n_of_elements - 1);

    cout << "The largest array element is: " << largest << " and the smallest: " << smallest << "\n";

}

int function(int* arr, int* largest, int* smallest, int n_elem)
{

    if (n_elem <= 0) return 0;

    if (arr[n_elem] > *largest)
        *largest = arr[n_elem];

    if (arr[n_elem] < *smallest && arr[n_elem] != -77)
        *smallest = arr[n_elem];

    return function(arr, largest, smallest, n_elem - 1);
}