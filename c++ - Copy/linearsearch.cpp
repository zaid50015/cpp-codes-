#include<bits/stdc++.h>
using namespace std;
int Linearsearch(int n,int s,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the element to be searched"<<endl;
    int s;
    cin>>s;
    cout<<"Element found at the position "<<Linearsearch(n,s,arr);
}