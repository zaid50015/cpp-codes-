#include<iostream>
using namespace std;
int main()
{
    int* p=new int[3][3];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
            cin>>(p[i][j]); 
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
           cout<<(p[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;
}