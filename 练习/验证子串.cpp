#include<iostream>
using namespace std;
int main(){
	string a,b;
	
	cin>>a>>b;
	if (a.find(b)) {
		cout<<"s2 is substring of s1";
	}	else if (b.find(a)) {
		cout<<"s1 is substring of s2";
	}else {
		cout<<"no substring ";
	}
	
	
	return 0;
	
}