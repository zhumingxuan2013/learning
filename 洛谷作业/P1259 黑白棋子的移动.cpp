#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cout<<"o";
	for(int i=1;i<=n;i++)cout<<"*";
	cout<<"--"<<endl;
	for(int i=n-1;i>2;i--) {
		if (i==3) {
			for(int j=0;j<i;j++)cout<<"o"; 
			cout<<"--";  
			for(int j=0;j<i;j++)cout<<"*"; 
			for(int j=0;j<n-i;j++)cout<<"o*";  
			cout<<endl;  
		}else {
			for(int j=0;j<i;j++)cout<<"o"; 
			cout<<"--";  
			for(int j=0;j<i;j++)cout<<"*"; 
			for(int j=0;j<n-i;j++)cout<<"o*";
			cout<<endl;  
			for(int j=0;j<i;j++)cout<<"o"; 
			for(int j=0;j<i;j++)cout<<"*"; 
			cout<<"--";  
			for(int j=0;j<n-i;j++)cout<<"o*";
			cout<<endl;  
		}
	}
	cout<<"ooo*o**--*";  
	for(int i=0;i<n-4;i++)cout<<"o*";  
	cout<<endl;  
	cout<<"o--*o**oo*";  
	for(int i=0;i<n-4;i++)cout<<"o*";  
	cout<<endl;  
	cout<<"o*o*o*--o*";  
	for(int i=0;i<n-4;i++)cout<<"o*";  
	cout<<endl;  
	cout<<"--o*o*o*o*";  
	for(int i=0;i<n-4;i++)cout<<"o*";  
	cout<<endl;  
	return 0;
}