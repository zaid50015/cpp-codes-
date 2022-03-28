#include <iostream>
using namespace std;
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxorsum = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = tempxorsum & 1;
        pos++;
        tempxorsum = tempxorsum >> 1;
    }
    pos = pos - 1;
    int newxorsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos))
        {
            newxorsum = newxorsum ^ arr[i];
        }
    }
    cout << "Second unique number is=" << (newxorsum ^ xorsum) << endl;
    cout << "First unique number is=" << newxorsum << endl;
}
int main()
{
    cout << "Enter the size of an array" << endl;
    int n;
    cin >> n;
    cout << "Enter the " << n << "elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unique(arr, n);
    return 0;
}