#include <iostream>
using namespace std;
	
int main() {
	int n1,n2,n3,n4,w1,w2,w3,w4;
	cin>>w1>>w2>>w3>>w4;
	if(w1>=10){n1=1;}
	else n1=0;
	if(w2>=10){n2=1;}
	else n2=0;
	if(w3>=10){n3=1;}
	else n3=0;
	if(w4>=10){n4=1;}
	else n4=0;
	cout<<(n1+n2+n3+n4)<<endl;
	return 0;
}