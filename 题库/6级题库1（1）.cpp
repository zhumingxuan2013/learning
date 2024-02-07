#include <iostream>

using namespace std;
int main() {
	string a,b;
	for (int i=0; i<2; i++) {
		cin>>a>>b;
		int c=a.size();
		char m='!';
		for (int j=0; j<c; j++) {
			if (m<a[j]) {
				m=a[j];
			}
		}
		for (int j=0; j<c; j++) {
			if (m==a[j]) {
				cout<<a.insert(j+1,b)<<" ";
				break;
			}
		}
	}
}