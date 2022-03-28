#include<iostream>
using namespace std;
int uniqueElement(int arr[],int n)
{
    int xorsum=0;
    for (int i = 0; i <n; i++)
    {
      xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
cout<<"Enter the size of an array"<<endl;
int n;
cin>>n;
cout<<"Enter the "<<n<<"elements"<<endl;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<"Unique element is="<<uniqueElement(arr,n)<<endl;
return 0;
}