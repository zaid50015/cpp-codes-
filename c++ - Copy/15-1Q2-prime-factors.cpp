#include<iostream>
using namespace std;
void primefactors(int n)
{
    int arr[n+1]={0};
    for (int i = 2; i <=n; i++)
    {
        arr[i]=i;
    }
    for (int i = 2; i <= n; i++)
    {
        if(arr[i]==i)
        {
            for (int j = i*i; j<=n ; j=j+i)
            {
                if(arr[j]==j)
                {
                    arr[j]=i;
                }
            }
            
        }
    }
    cout<<"factors of number ="<<n<<" are"<<endl;
    while (n!=1)
    {   cout<<arr[n]<<",";
        n=n/arr[n];
      
    }
    
    
}
int main()
{
    int n;
    cout<<"Enter the number whose prime factors are needed"<<endl;
    cin>>n;
    primefactors(n);
    return 0;
}