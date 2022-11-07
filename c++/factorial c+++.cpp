#include<iostream>
using namespace std;
int main()
{
	int i, factorial=1,number;
	cout<<"Enter any number :";
	cin>>number;
	for (int i=1;i<=number;i++) {
		
		factorial=factorial*i;
	}
	cout<< "factorial of" <<number<<"is:"<<factorial<<endl;
	return 0;
}
