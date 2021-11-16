/* 2. Napisati funkciju koja vra?a referencu na neki element niza.
Koriste?i povratnu vrijednost funkcije kao lvalue uve?ajte i-ti element niza za jedan.*/

#include <iostream>
using namespace std;

int& function(int* arr, int i);

int main()
{
    int* arr, n = 0, i = 0;
    cout << "Enter array size: ";
    cin >> n;
   
    arr = new int[n];

    cout << "\nEnter the array: ";

    for (; i < n; i++)
        cin >> arr[i];

    cout << "\nEnter the number of the element you want to change: ";
    cin >> i;

    cout << "\n" << i << ". arr element before function call: " << arr[i] << endl;
   
    function(arr, i);

    cout << i << ". arr element *after* function call: " << arr[i] << endl;

    delete[] arr;
    arr = 0;
    return 0;
}

int& function(int* arr, int i)
{
    arr[i]++;
    return arr[i];
}