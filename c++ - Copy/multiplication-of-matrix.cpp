#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of rows and coloumns of the two matrix" << endl;
    int r1, c, r2;
    cin >> r1 >> c >> r2;
    int m1[r1][c];
    int m2[c][r2];
    cout << "Enter " << r1 * c << " in matrix" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter " << c * r2 << " in matrix" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            cin >> m2[i][j];
        }
    }
    int mul[r1][r2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            mul[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout << "your multiplied matrix is" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}