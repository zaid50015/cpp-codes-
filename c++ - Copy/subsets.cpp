#include <iostream>
using namespace std;
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j]<<" ";
            }
             cout << endl;
        }
          }

}
int main()
{
    cout << "Enter the length of the set" << endl;
    int n;
    cin >> n;
    cout << "Enter " << n << " numbers" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subsets(arr, n);
    return 0;
}