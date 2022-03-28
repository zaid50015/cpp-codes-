#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number" << endl;
    int n, i, j;
    cin >> n;
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
        cout<<endl;
    }
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
        cout<<endl;
    }
    return 0;
}