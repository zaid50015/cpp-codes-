#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of rows";
    int n;
    cin >> n;
    int i, j;
    int sp;
    for (i = 1; i <= n; i++)
    {
        for (sp = n - i; sp > 0; sp--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (sp = n - i; sp > 0; sp--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
