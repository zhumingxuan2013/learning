#include <iostream>
using namespace std;
int main() {
	unsigned long long a;
	cin>>a;
	for (unsigned long long i=1;i<=a; i++) {
		for (unsigned long long j=1;j<=a-i;j++) 
			cout<<" ";
		for (unsigned long long j=1;j<=i*2-1;j++) 
				cout<<"*";	
		
		cout<<endl;
	}
	for (unsigned long long i=a-1;i>=1; i--) {
		for (unsigned long long j=1;j<=a-i;j++) 
			cout<<" ";
		for (unsigned long long j=1;j<=i*2-1;j++) 
				cout<<"*";		
			
		cout<<endl;

	}
	
	return 0;
}