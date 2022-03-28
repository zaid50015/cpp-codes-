#include<iostream>
#include<climits>
using namespace std;
int main()
{
  cout << "Enter the lenght of array" << endl;
  int n;
  cin >> n;
  cout << "Enter the elements in array " << endl;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
   for (int i = 0; i < n; i++)
  {
    cout<< arr[i]<<",";
  }
   int N = 1000;
  int a[N];
  for (int i = 0; i < N; i++)
  {
    a[i] = -1;
  }
  int minindex = INT_MAX;
 
  for (int i = 0; i < n; i++)
  {
    if (a[arr[i]]!= -1)
    {
      minindex = min(minindex, a[arr[i]]);
    }
    else
    {
      a[arr[i]]=i;
    }
  }
  cout<<endl;
  cout<< minindex;

  return 0;
}