#include<iostream>
using namespace std;
int main(){
    cout<<"Enter two numbers to check the greatest"<<endl;
    int x,y;
    cin>>x>>y;
    int max,min;
    if(x>y){
      max=x;
      min=y;
    }
    else{
        max=y;
        min=x;
    }
    cout<<"MAX="<<max<<endl;
    
    cout<<"MIN="<<min<<endl;

    return 0;
}