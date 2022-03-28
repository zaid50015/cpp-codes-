#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the strings "<<endl;
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<endl<<s;
    return 0;
}