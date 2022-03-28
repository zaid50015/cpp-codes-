#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of rows and columns"<<endl;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}