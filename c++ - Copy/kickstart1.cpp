#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the length of array" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements in array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    cout << "Maximum arthimetic sub array is ";
    int pd = arr[1] - arr[0];
    int curr = 2;
    int ma = -1;
    for (int i = 2; i < n; i++)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            ma = max(ma, curr);
            curr = 2;
        }
    }
    cout << ma;
    return 0;
}