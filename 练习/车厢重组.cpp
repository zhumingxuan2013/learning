#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	int d=0;
	for (int i=0; i<a-1; i++) {
		for (int j=0; j<a-1; j++) {
			if (b[j]>b[j+1]) {
				swap(b[j], b[j+1]);
				d++;
			}
		}
	}
	cout<<d<<endl;
	return 0;
}