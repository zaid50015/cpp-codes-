#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int n, int s, int arr[])
{
    int lb = 0;
    int ub = n-1 ;
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == s)
        {
            return mid+1;
        }
        else if (arr[mid] > s)
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    return -1;
}
int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements in the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    int s;
    cin >> s;
    cout << "Element found at the position " << BinarySearch(n, s, arr);
    return 0;
}