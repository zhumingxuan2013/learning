#include <iostream>

using namespace std;
int main() {
	
	int n;
	cin >> n;
	int a[n];
	int q=1;
	int r=0;
	for (int i=0;i<n;i++) {
		a[i]=i+1;
	}
	r=a[0]/2+a[0]/3+a[0]/5;
	for (int i=0; i<n; i++) {
		if (a[i]/2+a[i]/3+a[i]/5!=r) {
			r=a[i]/2+a[i]/3+a[i]/5;
			q++;
		}
	}
	cout<<q;
	return 0;
}