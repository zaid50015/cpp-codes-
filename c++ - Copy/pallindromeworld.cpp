#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the lenght of the world"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the world"<<endl;
    char s[n+1];
    cin>>s;
    int i=0;
    while(i<n)
    {
        if(s[i]!=s[n-1-i])
        {
            cout<<s<<" is not a pallindrome world"<<endl;
            return 0;
        }
        i++;
    }
   cout<<s<<" is a pallindrome world";
   return 0;
}
