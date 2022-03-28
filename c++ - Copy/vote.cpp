#include<iostream>
using namespace std;
bool vote(int n)
{
    if(n>=18){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    cout<<"Enter the age"<<endl;
    int age;
    cin>>age;
    if(vote(age)){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not eligible to vote";
    }
    return 0;
}