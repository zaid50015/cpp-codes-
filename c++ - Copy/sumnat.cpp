#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<sum<<endl;
}