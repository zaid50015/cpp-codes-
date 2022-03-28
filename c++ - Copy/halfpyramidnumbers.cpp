#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of ";
    int n;
    cin >> n;
    int i, j;
    //inverted star with 180 degree rotation
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i <= (n - j))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // Printing triangle with numbers
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    //printing triangle with 180 degree rotation
    int count = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= (n - i))
            {
                cout << " ";
            }
            else
            {
                cout << count<<"";
                count++;
            }
        }
        count=1;
        cout << endl;
    }
    return 0;
}