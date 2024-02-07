#include <iostream>

using namespace std;
int main() {
	int pos=0;
	int s=0,x;
	int n,m;
	cin>>n>>m;
	x=n;
	int a[n+1];
	memset(a, 0, sizeof(a));
	do{
		pos++;

		if (pos==n+1) {
			pos=1;
		}
		if (!a[pos]) {
			s++;
		}
		if (s==m) {
			s=0;
			a[pos]=1;
			cout<<pos<<"\t";
			x--;
		}
		}while (x>1) ;
		
	for (int i=1; i<n+1; i++) {
		if (!a[i]) {
			cout<<i;
			cout<<endl;
			cout<<i;

			break;
		}
	}
}