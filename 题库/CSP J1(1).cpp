#include <iostream>

using namespace std;
int main() {
	int i;
	cin>>i;
	int b[i];
	int y=0;
	for(int j=0;j<i;j++){
		cin>>b[j];
		if (y<b[j]) {
			y=b[j];
		}
	}
	int u[y*y];
	for (int j=0; j<y; j++) {
		u[j]=0;
	}
	for (int j=0; j<i; j++) {
		if (u[b[j]]==0) {
			u[b[j]]=1;
		}
		else {
			b[j]=0;
		}
	}
	sort(b, b+i);
	for(int j=0;j<i;j++){
		
		if (b[j]) {
			cout<<b[j]<<" ";
		}
	}
}