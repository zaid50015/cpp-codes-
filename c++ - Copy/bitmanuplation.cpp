#include <iostream>
using namespace std;
void getbit(int n, int pos)
{
    int bitmask = 1 << pos;
    n = n & bitmask;
    if (n == 0)
        cout << "Bit is 0" << endl;
    else
        cout << "Bit is 1" << endl;
}
int setbit(int n, int pos)
{
    int bitmask = 1 << pos;
    n = n | bitmask;
    return n;
}
int clearbit(int n, int pos)
{
    int bitmask = ~(1 << pos);
    n = n & bitmask;
    return n;
}
int setbit(int update, int n, int pos)
{
    if (update)
        setbit(n, pos);
    else
        clearbit(n, pos);
}
int main()
{ int f=2&1;
    cout<<f;

    cout << "Enter a number to get  bit and to set the bit" << endl;
    int n;
    cin >> n;
    cout << "Enter the bit to get it" << endl;
    int pos;
    cin >> pos;
    getbit(n, pos);
    cout << "Number after setting is=" << setbit(n, pos) << endl;
    cout << "NUmber after clearing bit is=" << clearbit(n, pos) << endl;
    cout << "Enter the bit to be updated" << endl;
    int update;
    cin >> update;
    cout << "Bit after updating is=" << setbit(update, n, pos) << endl;
    return 0;
}