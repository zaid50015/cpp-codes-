#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    cout << "enter the binomial coefficents";
    int n, r;
    cin >> n >> r;
    cout << fact(n) / (fact(n - r) * fact(r)) << endl;

    // printing flyods triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << endl;
    }
    return 0;   
}