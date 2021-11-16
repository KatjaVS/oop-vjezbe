#include "vector.hpp"

void MyVector::vector_new()
{
    int* temp;
    int i = 0;
    capacity = 1;

    if (size == 0)
    {
        arr = new int[1];
        capacity = 1;
    }
    else
    {
        size = size * 2;
        temp = new int[size];

        for (; i < size; i++)
        {
            temp[i] = arr[i];

        }
        capacity *= 2;
        // arr.clear() ??
        arr = new int[capacity];

        for (i = 0; i < size; i++)
        {
            arr[i] = temp[i];
        }
    delete[] temp;
    }
}


void MyVector::vector_delete()
{
    delete[] arr;
}


void MyVector::vector_push_back(int n)
{
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    arr[size] = 0;
    size--;
}


int& MyVector::vector_front()
{
    return arr[0];
}

int& MyVector::vector_back()
{
    return arr[size - 1];
}


int MyVector::vector_size()
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}