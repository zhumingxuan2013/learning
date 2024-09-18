#include <iostream>

using namespace std;

long long n,m,p,q,c,d,nc,nd,a[300005];
void haodongdong(){	
	for(int i=2; i<300000; i++) {
		c=(p*nc+nd)%m;
		d=(q*nc)%m;
		nc=c;
	nd=d;
	}
}
int main() {
	cin>>p>>q>>a[1]>>a[2]>>n>>m;
	p%=m;
	q%=m;
	a[1]%=m;
	a[2]%=m;
	a[3]=((p*a[2]+q*a[1])%m+m)%m;
	nc=p;
	nd=q;
	haodongdong();
	while(n>300000) {a[1]=((nd*a[1]+nc*a[2])%m+m)%m;a[2]=((nd*a[2]+nc*a[3])%m+m)%m;a[3]=(p*a[2]+q*a[1])%m;n-=300000;
	}
	for(int i=4; i<=n; i++) {
		a[i]=(p*a[i-1]+q*a[i-2])%m;
	}
	cout<<a[n]%m;
	return 0;
}