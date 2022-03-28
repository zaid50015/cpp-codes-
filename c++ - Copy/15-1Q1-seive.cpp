#include<iostream>
using namespace std;
void seive(int n)
{
    int arr[n+1]={0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                arr[j]=1;
            }
            
        }
        
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]!=1)
        {
            cout<<i<<",";
        }
        
    }
    
}
int main()
{
    cout<<"Enter the number upto which prime numbers need to be printed"<<endl;
    int n;
    cin>>n;
    seive(n);
}