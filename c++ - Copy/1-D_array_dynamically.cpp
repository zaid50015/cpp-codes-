#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int *arr=new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<";";
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<endl<<"The sum of elements is"<<sum;
    
    delete(arr);
    arr=NULL;
    return 0;
}
