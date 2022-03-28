#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the length of the sub array is" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elemnts  in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elemnts in sub array are" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <=j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}