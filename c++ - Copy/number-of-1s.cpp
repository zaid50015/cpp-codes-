#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number to count the number of one's"<<endl;
    int n;
    cin>>n;
    int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<"Number of 1's are="<<count<<endl;
    return 0;
}