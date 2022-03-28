#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    cout << "Enter a string" << endl;
    int arr[26];
    string s;
    getline(cin, s);
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    int length = s.length();
    int max = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        arr[s[i] - 'a']++;
    }
    char f;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
             f=i+'a';
        }
    }
    cout<<"Maximum occuring charcter is"<<f<<endl;
    cout<<"It's frequency is"<<max<<endl;
    return 0;
}