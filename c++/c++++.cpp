#include<iostream>
using namespace std;
class student 
{
	public:
	int id; // data member 
		
		string name; // data member 

};
int main()
{
	student s1; // creating an obj of class
	s1.id=12;
	s1.name = "arwa";
	// printing the value 
	
cout<<s1.id<<endl;
cout<<s1.name<<endl;
	return 0;
}
