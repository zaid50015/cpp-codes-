#include<bits/stdc++.h>
#include<string>
using namespace std;
string decitooctal(int n)
{
    string s="";
    int d;
    while(n>0)
    {
        d=n%8;
        s=to_string(d)+s;
        n=n/8;
    }
    return s;
}
int  main()
{
    cout<<"Enter Decimal number to convert it into Octal"<<endl;
    int n;
    cin>>n;
    cout<<"Octal form is "<<decitooctal(n);
    return 0;
}