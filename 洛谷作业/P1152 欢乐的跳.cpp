#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
long long b[1001],c[1001];
int main() {
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>b[i];
	}
	for(int i=1;i<n;i++){
		c[i]=abs(b[i]-b[i+1]);
	}
	sort(c+1,c+n);
	for (int i=1; i<n; i++) {
		if (c[i]!=i) {
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
}