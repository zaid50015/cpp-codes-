#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of rows and columns" << endl;
    int n;
    int m;
    cin >> n >> m;
    int a[n][m];
    cout << "Enter " << n * m << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to be searched" << endl;
    int s;
    cin >> s;
    int l = 0;
    int u = n - 1;
    while (l<n && u>=0)
    {
        if (a[l][u] == s)
        {
            cout << "Elemnt found at position " << l << " ," << u << endl;
            return 0;
        }
        a[l][u] > s ? u-- : l++;
    }
    return 0;
}