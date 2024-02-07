#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int c[b][2];
	int d[a+1];
	for (int i=0; i<b; i++) {
		cin>>c[i][0]>>c[i][1];
	}
	
	for (int i=0; i<=a; i++) {
		d[i]=1;
	}
	int ans=0;
	for (int i=0; i<b; i++) {
		for (int j=c[i][0] ;j<=c[i][1];j++) {
			d[j]=0;
			
		}
	}
	for (int i=0; i<=a; i++) {
		if (d[i]) {
			ans++;
		}
	}
		cout<<ans;
}