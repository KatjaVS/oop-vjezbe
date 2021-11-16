#include "vector.hpp"

using namespace std;

int main()
{
    MyVector myvect;
    myvect.vector_new();

    int elem;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while(cin >> elem)
        myvect.vector_push_back(elem);

    cout << "first element " << myvect.vector_front() << endl;
    cout << "last element " << myvect.vector_back() << endl;
    myvect.print_vector();

    cout << "removing last element" << endl;
    myvect.vector_pop_back();
    myvect.print_vector();

    cout << "size " << myvect.vector_size() << endl;
    cout << "capacity " << myvect.capacity << endl;

    myvect.vector_delete();
}
