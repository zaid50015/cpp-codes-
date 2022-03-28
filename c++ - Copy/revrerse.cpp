#include<iostream>
using namespace std;
int main(){
    int rev=0;
    int d;
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    while (n>0)
    {
      d=n%10;
      cout<<d<<endl;
      rev=rev*10+d;
      n=n/10;
    }
    cout<<rev;
    return 0;
}