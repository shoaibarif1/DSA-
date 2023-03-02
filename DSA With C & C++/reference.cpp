#include<iostream>
using namespace std;
 
 int main()
 {
     int a=10;
     int &r=a;  //reference variable
     
     int b=30;
     r=b;
     //a=r//b=a=r
     cout<<a<<endl<<r<<endl; 
      



 }