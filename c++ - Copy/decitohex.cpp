#include <bits/stdc++.h>
#include <string>
using namespace std;
string decitohex(int n)
{
    string s = "";
    int d;
    while (n > 0)
    {
        d = n % 16;
        if (d >= 0 && d <= 9)
        {
            s=to_string(d)+s;
        }
        else{
            char c='A'+d-10;
            s.push_back(c);
        }
        n=n/16;
    }
    return s;
}
int main()
{
    cout<<"Enter a number to convert into hexadecimal "<<endl;
    int n;
    cin>>n;
    cout<<decitohex(n);
    return 0;
}