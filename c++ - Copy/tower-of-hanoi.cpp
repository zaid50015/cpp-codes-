#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void hanoi(int i,int n, string source, string helper, string destination)
{
    if (i>n) // base case
    {
      return;
    }
    hanoi(i+1,n, source, destination, helper);
    cout << "Move disk " << i << " from " << source << " to " << destination << endl;
    hanoi(i+1,n, helper, source, destination);
}
int main()
{
    cout << "Enter the number of disk to be transferred" << endl;
    int n;
     cin>>n;
    hanoi(1,n, "S", "H", "D");
    return 0;
}