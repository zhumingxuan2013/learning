#include <iostream>

using namespace std;
int main() {
	int a[10],b=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
		b=max(a[i],b);
	}
	for(int i=0;i<10;i++){
		if(a[i]==b){
			cout<<i<<" ";
		}
	}
	int c=b;
	for(int i=0;i<10;i++){
		c=min(c,a[i]);
		
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		if(a[i]==c){
			cout<<i<<" ";
		}
	}
	
}