#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30};
    int *ptr=a;
    cout<<ptr<<endl;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<a+1<<endl;/*(This is same as when we increment a pointer it gets incremented by 4)*/
    cout<<a+2<<endl;
    cout<<*(a+2)<<endl;
    int b=50;
    int *p=&b;
    cout<<p<<endl;
    cout<<p+1<<endl;
   cout<<p+2<<endl;/*when a pointer of int type is incremented it is automatically incremented in multiples of 4z */
   cout<<a[0]<<endl;
   int *aptr=a;
   for (int i = 0; i < 3; i++)
   {
       cout<<*(aptr+i)<<" ";
   }
   

    return 0;
}

/// ALWAYS USE CIN.IGNORE() BEFORE CIN.GETLINE();
// FOR CHARCTER ARRAY CIN.GETLINE(ARRY NAME,SIZE+1)
// FOR STRINGS GETLINE(CIN,STRING NAME)