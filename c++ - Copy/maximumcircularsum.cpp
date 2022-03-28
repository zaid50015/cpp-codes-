#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int kadens(int arr[], int n)
{
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}
int main()
{
    cout << "Enter the length of the array " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum, nonwrapsum;
    int sum = 0;
    wrapsum = kadens(arr, n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
    }
    nonwrapsum = sum + kadens(arr, n);
    cout << max(nonwrapsum, wrapsum) << endl;
    return 0;
}