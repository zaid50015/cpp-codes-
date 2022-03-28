#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a the length of the character"<<endl;
    int n;
    cin>>n;
    cin.ignore();
        char s[n+1];
     cin.getline(s,n+1);
      int i=0;
    while (s[i]!='\0')
    {
        cout<<s[i]<<endl;
        i++;
    }
    
      /* int n;
    cin>>n;
            char s[n+1];
     cin.getline(s,n+1);
    
      int i=0;
    while (s[i]!='\0')
    {
        cout<<s[i]<<endl;
        i++;
    }*/
    
    return 0;
}