#include<iostream>
using namespace std;
int main(){
 cout<<"ENter thrre numbers"<<endl;
 int a,b,c;
 cin>>a>>b>>c;
 if (a>b)
 {
     if (a>c)
     {
         cout<<"greatest number is"<<a<<endl;
     }
     else{
         cout<<"greater number is "<<c<<endl;
     }
     
 }
 else if(b>c){
     if (b>a)
     {
         cout<<"greater number is "<<b<<endl;
         
     }
     else{
         cout<<"greater number is "<<c<<endl;

     }
 }
 
}