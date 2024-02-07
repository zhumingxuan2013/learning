#include <iostream>

using namespace std;
int main() {
	int a[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>a[i][j];
		}
	}
	int m=0;
		for (int s=0; s<5; s++) {
		for (int j=0; j<5; j++) {
			int q=0,w=100;

			for (int i=0; i<5; i++) {
				if (a[s][i]>q) {
					q=a[s][i];
				}
			}
					for(int i = 0; i < 5; i ++){
					
					if(a[i][j] < w){
						w = a[i][j];
					
				}
			}
	
			for (int o=0; o<1; o++) {
				for (int j=0; j<5; j++) {
					if (a[o][j]==w&&a[o][j]==q) {
						cout<<o<<" "<<j<<" "<<a[o][j]<<" ";
						m++;
						break;
					}
				}
			}
		}
	}
	if (m==0) {
		cout<<404;
	}
	return 0;
}