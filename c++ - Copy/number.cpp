#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number";
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "1 ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}