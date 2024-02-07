#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b[a];
	for (int i=0; i<a; i++) {
	cin>>b[i];
	}
	int q=0,w=0;
	for (int i=1; i<a; i++) {
		if (b[i]>b[i-1]) {
			q++;
			if (w<=q) {
			
			w=q;
			}
			}
		else {
			q=0;
		}
	}
	cout<<w+1;
	return 0;
}