#include <iostream>
using namespace std;

void printArray(int arr[], int size){


cout<<"printing the array"<<endl;

for (int i = 0; i < size; ++i)
{
	cout<< arr[i]<<" " <<endl;
}

cout<<"printing Done"<<endl;

}

int main()
{

int number[15];
//accessing an array
//cout<< "value at 20 index" <<number[20] <<endl;

int second[3]={5,7,11};

cout<< "value at 2 index" <<second[2] <<endl;

int third[15]={2,7};
int n =15;
printArray(third ,15);

cout<<"printing the array"<<endl;

for (int i = 0; i < n; ++i)
{
	cout<< third[i]<<" " <<endl;
}

char ch[5];





cout<<"Everything is fine"<<endl<<endl;

return 0;
}