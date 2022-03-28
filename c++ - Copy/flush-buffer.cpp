// C++ program to demonstrate the
// use of flush function
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " " << flush;
    }
    cout<<endl;
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
        
    }
    cout << endl ;
    return 0;
}
