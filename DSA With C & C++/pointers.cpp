#include<iostream>
using namespace std;

//pointer to array
int main()
{
    int A[5]={2,4,6,8,10};    //creaing in stack
    int *p;
    //int &A;     wrong way
    //p= &A[0];
    p= A;
    for (int i=0;i<5;i++)
    cout<<p[i]<<endl;


}