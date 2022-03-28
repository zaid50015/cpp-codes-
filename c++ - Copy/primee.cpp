#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "enter a number to check prime" << endl;
    int n;
    bool a = true;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" ;
            a = false;
            break;
        }
    }
    if (a == true)
    {
        cout << "Prime";
    }
    return 0;
}