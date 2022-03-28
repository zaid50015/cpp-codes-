#include<iostream>
using namespace std;
int revrsebits(int n)
{
    int result=0;
    for (int i = 0; i < 32; i++)
    {
        int bit=n&1;
        int reverse=bit<<(31-i);
        result=result|reverse;
        n=n>>1;
    }
    return result;
}
int main()
{
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    cout<<revrsebits(n)<<endl;
    return 0;
}