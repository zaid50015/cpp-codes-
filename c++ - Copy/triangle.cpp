#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the side of the triangle"<<endl;
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if (sidea==sideb && sidea==sidec)
    {
      cout<<"Triangle is equilateral";
    }
    else if(sidea!=sideb ||sidea!=sidec || sideb!=sidec ){
    cout<<"Triangle is issocelles";
    }
   else{
     cout<<"scalene triangle";  }
    
}

