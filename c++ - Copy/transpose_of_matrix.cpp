#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of rows and column of the matrix" << endl;
    int n, m;
    cin >> n >> m;
    int a[n][m];
    cout << "Enter " << n * m << " elements in matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int temp[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << temp[i][j];
        }
        cout << endl;
    }

    return 0;
}