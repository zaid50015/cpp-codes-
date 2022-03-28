#include <iostream>
using namespace std;
int main()
{
    cout << "enter a nummber";
    int n;
    cin >> n;
    int i, j;
    int s;
    for (i = 1; i <= n; i++)
    {
        s = i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= (n - i))
            {

                cout << " ";
            }
            else
            {
                cout << s;
                s--;
            }
        }
        for (j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout<<endl;
    }
    return 0;
}