#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl<<arr;
    int* pointer=arr;
    cout<<endl<<pointer;
    // name of array is like a constant pointer means its value canot be incremented or decrimented
    for (int i = 0; i < 3; i++)
    {
        cout<<*pointer<<",";
        pointer++;
    }
      /* for (int i = 0; i < 3; i++)
    {
        cout<<*arr<<",";
        arr++;
    }*/
    // POINTER TO POINTER APPROACH
   int z=56;
   int* p=&z;
   int** q=&p;
   cout<<p<<","<<q<<endl;
   cout<<*q<<" "<<**q<<endl;
   **q=50;
   cout<<z;
    return 0;
}