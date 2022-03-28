#include <iostream>
using namespace std;
int main()
{
    /*cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    char s[n];
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        cout << s[i]<<endl;
    }*/
    char s[100]; 
    cin>>s;
    cout << s << endl;/*Compiler ki ek adat hoti hai vo enter ke baad har cheez next varable me store karta hai jab humlog words ki baat kare*/
    int i=0;
    while (s[i] != '\0')
    {
        cout << s[i] << endl;
         i++;   
    }
  
    return 0;
}