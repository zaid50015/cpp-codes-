#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number ";
    int n;
    cin >> n;
    n = 2 * n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}