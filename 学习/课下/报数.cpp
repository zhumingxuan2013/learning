#include <iostream>

using namespace std;
int main() {
	int p=0;
	int s=0,x;
	int n,m;
	cin>>n>>m;
	x=n;
	int a[n+1];
	memset(a, 0, sizeof(a));
	do{
		p++;

		if (p==n+1) {
			p=1;
		}
		if (!a[p]) {
			s++;
		}
		if (s==m) {
			s=0;
			a[p]=1;
			x--;
		}
		}while (x>1) ;
		
	for (int i=1; i<n+1; i++) {
		if (!a[i]) {
			cout<<i;
			break;
		}
	}
}