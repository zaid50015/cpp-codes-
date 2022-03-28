#include <iostream>
using namespace std;
void fib(int n)
{
    int a = 0;
    int b = 1;
    cout<<a<<","<<b<<",";
    int sum = 0;
    for (int i = 0; i <= (n - 2); i++)
    {
        sum = a + b;
        cout<<sum<<",";
        a = b;
        b = sum;
    }
}
int main()
{
    cout << "enter the limit upto which fibbonaci series is to be printed" << endl;
    int c;
    cin>>c;
    fib(c);

    return 0;
}