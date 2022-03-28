#include <bits/stdc++.h>
#include <string>
using namespace std;
int hextodeci(string s)
{
    int l = s.size();
    int sum = 0;
    int f = 1;
    for (int i = l - 1; i >= 0; i--)
    {
        if (s[i] < 'A')
        {
            sum += f * (s[i]-'0');
        }
        else if(s[i] >= 'A' && s[i] <= 'F')
        {
            sum += f * (s[i] - 'A' + 10);
        }
        f *= 16;
    }
    return sum;
}
int main(){
    cout<<"Enter a hexadecimal number to convert it into decimal"<<endl;
    string s;
    cin>>s;
    cout<<"Its decimal form is "<<hextodeci(s)<<endl;

}