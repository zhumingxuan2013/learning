#include <iostream>

using namespace std;
int main() {
	int a;
	cin>>a;
	int b[a],c[3]{0,0,0},d[a],e[a],f1=0,f2=0,f0=0,ff1=0,ff2=0;
	for (int i=0; i<a; i++) {
		cin>>b[i];
		c[b[i]]++;
	}
	int l=0;
	for (int i=1; i<=3; i++) {
		for (int j=0;j<c[i];j++) {
			d[l]=i;
			l++;
		}
	}
	for (int i=0; i<a; i++) {
		e[i]=b[i]-d[i];
	
	}
	int u=0,v=0,x=0,y=0;
	for(int i=0;i<a;i++){
		if(e[i]==1)u++;
		if(e[i]==-1)v++;
		if(e[i]==2)x++;
		if(e[i]==-2)y++;
	}
	cout<<max(u,v)+min(x,y);
	
}
