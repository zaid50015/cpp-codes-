#include<iostream>
using namespace std;
int gif(int num1,int num2)
{
    int temp;
    while (num2!=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    return num1;
}
int main()
{
    cout<<"Enter two numbers to find their HCF"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    cout<<"HCF="<<gif(num1,num2);
    return 0;
}