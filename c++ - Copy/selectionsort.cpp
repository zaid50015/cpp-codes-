#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the range of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl<<"Your sorted array is "<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
              if(arr[i]>arr[j])
              {
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
        }
    }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}