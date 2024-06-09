#include <iostream>
using namespace std;
int main() {
	unsigned long long int a;
	cin>>a;
	for(int i=0;i<a;i++)cout<<"*";
	cout<<endl;
	for (int i=1; i<a; i++) {
		for(int j=0;j<a-i-1;j++){
			cout<<" ";
		}
		if(i!=a-1)
		    cout<<"*"<<endl;
	}
	for(int i=0;i<a;i++)cout<<"*";

} 