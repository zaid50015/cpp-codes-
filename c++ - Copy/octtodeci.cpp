#include<bits/stdc++.h>
using namespace std;
int octodeci(int n)
{
    int d;
    int sum=0;
    int x = 1;
    while (n > 0)
    {
        d = n % 10;
        sum += d*x;
        x *= 8;
        n = n / 10;
    }
    return sum;
}
int main(){
    cout<<"enter a number "<<endl;
    int n;
    cin>>n;
    cout<<"Octal  to Decimal form is "<<octodeci(n);
    return 0;
}
