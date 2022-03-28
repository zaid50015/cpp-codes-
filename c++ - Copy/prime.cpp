#include <iostream>
using namespace std;
int main()
{
    cout << "enter the starting range from where prime numbers need to be find " << endl;
    int a;
    cin >> a;
    cout << "enter the ending range" << endl;
    int b;
    cin >> b;
    int i;
    int j;
    cout << "prime numbers in the range" << a << "-" << b << "are" << endl;
    for (i = a; i <= b; i++)
    {

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << endl;
        }
    }
}
