#include <iostream>
using namespace std;
int s[7];
int main() {
	int a;
	cin>>a;
	int ans[7];
	for (int i=0; i<7; i++) {
		cin>>ans[i];
	}
	for (int i=0; i<a; i++) {
		int cnt=0;
		for (int j=0; j<7; j++) {
			int p;
			cin>>p;
			for (int k=0; k<7; k++) {
				if (p==ans[k]) {
					cnt++;
					break;
				}
			}
		}
		s[7-cnt]++;

	}
	for (int i=0; i<7; i++) {
		cout<<s[i]<<" ";
	}
	return 0;
}