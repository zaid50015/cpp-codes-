#include<iostream>
using namespace std;

 bintodeximal(int n)
{
    
    int sum = 0;
    int x = 1;
    while (n > 0)
    {
        int d = n % 10;
        sum += x * d;
        x *= 2;
         n/=10;
    }
    return sum;
}
int main(){
    cout<<"Enter a binary number";
    int n;
    cin>>n;
   cout<<bintodeximal(n);

    return 0;
}