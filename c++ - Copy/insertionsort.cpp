#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the range and elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout<<endl<<"your sorted array is "<<endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}