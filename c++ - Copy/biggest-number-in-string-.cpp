#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Enter a string" << endl;
    string s;
    getline(cin, s);
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}