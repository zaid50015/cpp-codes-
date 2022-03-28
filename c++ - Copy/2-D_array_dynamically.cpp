#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows and columns "<<endl;
    int m,n;
    cin>>n>>m;
    int *arr=new int(n*m);
    cout<<"Enter "<<n*m<<" elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>*(arr+i*m+j);
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<*(arr+i*m+j)<<" ";
             
        }
        cout<<endl;
    }
   delete[] arr;
    arr=NULL;
}