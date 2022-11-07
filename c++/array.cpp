#include<iostream>
#include <math.h>
using namespace std;

void printArray(int arr [] , int size)
{
    cout<<"printing the array"<<endl; 
    {

    
for(int i=0;i<size;i++)
    
cout<<arr[i]<<" ";
    }
   cout<<"printing DONE"<<endl;

}

int main(){
    //declare

    int number[15];
    //accessing

    //cout<<"value of 14 index"<<number[14]<<endl;
  

  cout<<"value of 20 index"<<number[20]<<endl;

    int second[3]={5,7,11};

    
  cout<<"value of 2 index"<<second[2]<<endl;

int third[15]={2,7};

int n=15;

cout<<"printing the array"<<endl;
{

for(int i=0;i<n;i++)

cout<<third[i]<<"";
}
cout<<"Everything is fine"<<endl<<endl;


return 0;


}