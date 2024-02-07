#include <iostream>

using namespace std;
int main() {
	int a=11;
	
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	for (int i=0; i<a; i++) {
		for (int j=0; j<a; j++) {
			if (b[j]>b[j+1]) {
				int c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
				
			}
		}
	}
	for (int i=0; i<a; i++) {
		cout<<b[i]<<" ";

	}
}