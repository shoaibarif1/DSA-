/* our first program*/
#include<iostream>
#define pi 3.14
using namespace std;
int var ;
class ABC
{
	public: //acess specifer//
	int i;
	void show ()
{
	cout<<"inside class"<<endl;
	}
};
void main()
{
	int p=10;
	claser();
	ABC obj;
	obj.i=10;
	obj. show();
	cout<<"local variable"<<endl;
	cout<<"global variable"<<var<<endl;
	cout,,"object variable"<<obj,i<<endl;
}
