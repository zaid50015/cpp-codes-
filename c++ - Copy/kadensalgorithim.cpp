#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Enter the length of array " << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of array " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxsum = max(maxsum, sum);
    }
    cout << maxsum;
    return 0;
}
