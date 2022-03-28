#include <iostream>
using namespace std;
int ispoweroftwo(int n)
{
    return (n && !(n & (n - 1)));
}
int main()
{
    cout << "Enter the number to check if the number comes in power of 2's " << endl;
    int n;
    cin >> n;
    cout << ispoweroftwo(n)<<endl;
    return 0;
}