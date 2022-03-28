#include <iostream>
using namespace std;
void sumofarrays(int arr[], int n)
{
    cout << endl<< "sum of arrays is "<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}
int main()
{ cout<<"Enter the elements and lenght of the array"<<endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    sumofarrays(arr, n);
    return 0;
}