#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	string a=s;
	reverse(a.begin(),a.end());
	if(a==s){
		cout<<"YES";
	}else
	cout<<"NO";
}