#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the range of array"<<endl;
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
    cout<<endl;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minNo=min(minNo,arr[i]);
        maxNo=max(maxNo,arr[i]);

    }
    cout<<"max no is "<<maxNo<<" min no "<<minNo<<endl;
    int sum=0;
     for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];

    }
    cout<<"sum of element in an arrray are"<<sum;
    return 0;
}