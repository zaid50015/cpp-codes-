#include <iostream>
using namespace std;
// Call value by value
void swapbyvalue(int a, int b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

// PASS BY REFRENCE
void swapbyref(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
void inc(int *z)
{
    *z++;
}
int main()
{
    int a = 5;
    int b = 10;
    swapbyvalue(a, b);
    cout << a << "," << b << endl;
    swapbyref(&a, &b);
    cout << a << "," << b << endl;
    int z = 56;
    int *zptr = &z;
    inc(zptr);
    cout << z;

    return 0;
}