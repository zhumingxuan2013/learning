#include <iostream>

using namespace std;
int main() {
	float a[10];
	float b=0;
	int c=0,d=101;
	
	for (int i=0; i<10; i++) {
		cin>>a[i];
		b+=a[i];
		if (a[i]<a[c]) {
			c=i;
		}
		if (a[i]>a[d]) {
			d=i;
		}
	}
	b/=10;
	for (int i=0; i<10; i++) {
		if(a[i]>b){
			cout<<i+1<<" "<<a[i]<<endl;
		}
	}
	cout<<"最小值："<<endl;
	for (int i=0; i<10; i++) {
		if (a[i]==a[c]) {
			cout<<i+1<<" "<<a[i]<<endl;
		}
	}
	cout<<"最大值："<<endl;
	for (int i=0; i<10; i++) {
		if (a[i]==a[d]) {
			cout<<i+1<<" "<<a[i]<<endl;
		}
	}
}