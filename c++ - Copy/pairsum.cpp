#include <iostream>
using namespace std;
bool sumpair(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low + high] == k)
        {
            cout << "Pair found at index " << low << " " << high << endl;
            return true;
        }
        else if (arr[low + high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    cout << "Enter the length of array and its elemnts in array" << endl;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the" << i + 1 << "element" << endl;
        cin >> a[i];
    }
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    cout << "Enter the element " << endl;
    int k;
    cin >> k;
    sumpair(a, n, k);
    return 0;
}
