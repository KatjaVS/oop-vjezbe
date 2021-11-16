/*  3. Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja pravokutnik
  cije su stranice paralelne sa osima apscisa i ordinata.
Napisati funkciju koja prima niz pravokutnika i jednu kruznicu i vraca broj pravokutnika koji sijeku kruznicu.
Niz pravokutnika i kruznica šalju se u funkciju pomocu const referenci.
Napomena:
    – Jednadžba kruznice sa središtem u S(xs, ys) radijusa r
        (x ? xs)^2 + (y ? ys)^2  = r^2
– Pravokutnik u koordinatnom sustavu je odre?en sa svojom donjom lijevom i gornjom desnom tockom.*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// donja liva (x1, y1), gornja desna (x2, y2)  --->  gornja liva (x1, y2), donja desna (x2, y1) 

struct Rectangle {
    int lower_left_x;
    int lower_left_y;
    int upper_right_x;
    int upper_right_y;
};

struct Circle {

    int radius;
    int center_x;
    int center_y;

    bool num_of_intersections(const Rectangle& rect)
    {
        int width = abs(rect.upper_right_x - rect.lower_left_x);
        int height = abs(rect.upper_right_y - rect.lower_left_y);
        int distance_x = abs(center_x - rect.lower_left_x);
        int distance_y = abs(center_y - rect.lower_left_y);
        int corner_square;

        if (distance_x > (width / 2 + radius))
            return false;
        if (distance_y > (height / 2 + radius))
            return false;

        if (distance_x <= (width / 2))
            return true;
        if (distance_y <= (height / 2))
            return true;

        corner_square = (distance_x - width / 2) ^ 2 + (distance_y - height / 2) ^ 2;

        return (corner_square <= (radius ^ 2));
    }

};

int main()
{
    Rectangle* arr_rectangles;
    int i = 0, nmr_rectangles = 0, cnt = 0;

    Circle only_circle;

    cout << "Enter the circle radius: ";
    cin >> only_circle.radius;

    cout << "Enter the circle center x: ";
    cin >> only_circle.center_x;

    cout << "Enter the circle center y: ";
    cin >> only_circle.center_y;


    cout << "\n" << "Enter the number of rectangles: ";
    cin >> nmr_rectangles;

    arr_rectangles = new Rectangle[nmr_rectangles];

    for (i = 0; i < nmr_rectangles; i++)
    {
        cout << i + 1 << ". lower left x: ";
        cin >> arr_rectangles[i].lower_left_x;

        cout << i + 1 << ". lower left y: ";
        cin >> arr_rectangles[i].lower_left_y;

        cout << i + 1 << ". upper right x: ";
        cin >> arr_rectangles[i].upper_right_x;

        cout << i + 1 << ". upper right y: ";
        cin >> arr_rectangles[i].upper_right_y;

        cout << "\n";
    }

    for (int i = 0; i < nmr_rectangles; i++) {

        if (only_circle.num_of_intersections(arr_rectangles[i])) {
            cnt++;
        }
    }

    cout << "\n" << "num of intesects is: " << cnt << endl;


    /*
        provjera:

        for(i = 0; i < nmr_rectangles; i++)
        {
            cout << arr_rectangles[i].lower_left_x << ", ";
            cout << arr_rectangles[i].lower_left_y << endl;
            cout << arr_rectangles[i].upper_right_x << ", ";
            cout << arr_rectangles[i].upper_right_y << endl;
            cout << "\n";

        }
    */

    delete[] arr_rectangles;
}
