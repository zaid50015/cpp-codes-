#include <iostream>
#include<string>
using namespace std;
string decitobinary(int n){
    string sum ="";
    while(n>0){
        int d=n%2;
        sum=to_string(d)+sum;
        n=n/2;
    }
    
    return sum;
}
int main(){
    cout<<"Enter the decimal number"<<endl;
    int n;
    cin>>n;
    cout<<decitobinary(n)<<endl;
    return 0;
}