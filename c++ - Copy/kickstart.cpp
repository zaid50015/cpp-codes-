#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the length of a array" << endl;
    int n;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your elements in array are" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    int ma = -1;
    int flag=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > ma && arr[i] > arr[i + 1])
        {  
           flag++;
        }
        ma=max(arr[i],ma);
    }
    cout<<flag;
    return 0;
}