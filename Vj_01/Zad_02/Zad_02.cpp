#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Matrix {
    int rows;
    int cols;
    float** mtrx;

    void deallocation()
    {
        for (int i = 0; i < cols; i++) {
            delete[] mtrx[i];
        }
        delete[] mtrx;
    }

    void initialize_m()
    {
        mtrx = new float* [rows];

        for (int i = 0; i < rows; i++)
        {
            mtrx[i] = new float[cols];
        }
    }

    void input()
    {
        // matrix initialization 

        initialize_m();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                // cout << "[" << i << "]" << "[" << j << "]";

                cout << i << ". row, " << j << ". column: ";
                cin >> mtrx[i][j];
            }
            cout << endl;
        }
        print_m();
    }


    void range_m(Matrix& m1, int min, int max)
    {
        rows = m1.rows, cols = m1.cols;

        initialize_m();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                mtrx[i][j] = (float)(min + (rand() % (max - min + 1)));
            }
        }

        cout << "\nGenerated matrix in range [" << min << ", " << max << "] is:" << endl;
        print_m();
    }

    void addition_m(Matrix& m1, Matrix& m2)
    {
        rows = m1.rows;
        cols = m1.cols;

        initialize_m();

        if (m1.rows != m2.rows && m1.cols != m2.cols)
            cout << "Not possible, dimensions don't match." << endl;

        else {
            cols = m1.cols;
            rows = m1.rows;

            initialize_m();

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    mtrx[i][j] = m1.mtrx[i][j] + m2.mtrx[i][j];
                }
            }
        }

        cout << "\nThe result of adding the first two matrices is: " << endl;
        print_m();
    }

    void substraction_m(Matrix& m1, Matrix& m2)
    {
        rows = m1.rows;
        cols = m1.cols;

        initialize_m();

        if (m1.rows != m2.rows && m1.cols != m2.cols)
            cout << "Not possible, dimensions don't match.";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                mtrx[i][j] = m1.mtrx[i][j] - m2.mtrx[i][j];
            }
        }
        cout << "\nThe result of substracting the first two matrices is: " << endl;
        print_m();
    }

    void multiplication_m(Matrix& m1, Matrix& m2)
    {
        rows = m1.rows;
        cols = m1.cols;

        initialize_m();


        if (m1.cols != m2.rows)
            cout << "Not possible, dimensions don't match.";

        for (int i = 0; i < m1.rows; i++)
        {
            for (int j = 0; j < m2.cols; j++)
            {
                int sum = 0;
                for (int k = 0; k < m2.rows; k++)
                {
                    sum += m1.mtrx[i][k] * m2.mtrx[k][j];
                }
                mtrx[i][j] = sum;
            }
        }

        cout << "\nThe result of multiplying matrices is: " << endl;
        print_m();
    }

    void transposed_m(Matrix& m1)
    {
        rows = m1.rows;
        cols = m1.cols;

        initialize_m();

        for (int i = 0; i < m1.rows; i++)
        {
            for (int j = 0; j < m1.cols; j++)
            {
                mtrx[j][i] = m1.mtrx[i][j];
            }
        }

    }

    void print_m()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << right << setfill('0') << fixed << setprecision(4) << mtrx[i][j] << " ";
            }
            cout << "\n";
        }
    }

};

int main()
{
    int min = 0, max = 0, row = 0, col = 0;
    Matrix input_matrix, range_matrix, added_matrix, substracted_matrix, multiplied_matrix, first_transposed, range_transposed, temp_m;

    cout << "Input matrix rows and cols: ";
    cin >> input_matrix.rows >> input_matrix.cols;


    input_matrix.input();

    cout << "\nEnter the min value of the range: ";
    cin >> min;

    cout << "Enter the max value of the range: ";
    cin >> max;

    range_matrix.range_m(input_matrix, min, max);

    added_matrix.addition_m(input_matrix, range_matrix);

    substracted_matrix.substraction_m(input_matrix, range_matrix);

    cout << "Enter the matrix dimensions:" << endl;
    cin >> temp_m.rows;
    cin >> temp_m.cols;

    cout << "\nEnter the matrix for multiplication:" << endl;
    temp_m.input();


    multiplied_matrix.multiplication_m(input_matrix, temp_m);

    first_transposed.transposed_m(input_matrix);
    cout << "\nThe first transposed matrix is:" << endl;
    first_transposed.print_m();

    range_transposed.transposed_m(range_matrix);
    cout << "\nThe second (range) transposed matrix is:" << endl;
    range_transposed.print_m();

    input_matrix.deallocation();
    range_matrix.deallocation();
    added_matrix.deallocation();
    multiplied_matrix.deallocation();
    first_transposed.deallocation();
    range_transposed.deallocation();
    temp_m.deallocation();

}