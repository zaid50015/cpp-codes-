#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << endl;
    int n, i, j;
    cin >> n;
    //butterfly
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // new butterfly
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
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
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
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