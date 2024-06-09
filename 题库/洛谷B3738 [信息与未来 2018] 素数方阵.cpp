#include <iostream>
using namespace std;
bool an(int i){
	if (i==1) {
		return false;
	}
	for (int j=2; j<i; j++) {
		if (i%j==0) {
			
			return false;
		}
	}
	return true;
}
int a[1000][1000];
int main() {
	
	int n,o,p;
	cin>>n>>o>>p;
	int x[4]{0,1,0,-1},y[4]{1,0,-1,0},t=0;
	int z[n*n+1];

	int nn=n*n,i=0,xx=0,yy=0;
	int oo=0;
	for(int i=2;;i++){
		if (an(i)) {
			z[oo]=i;
			oo++;
			if (oo>nn) {
				break;
			}
		}
		
	}
	for (int i=0; i<nn; i++) {

		if (xx==n||yy==n||xx<0||yy<0||a[xx][yy]!=0) {
			xx-=x[t];
			yy-=y[t];
			t++;
			t%=4;
			xx+=x[t];
			yy+=y[t];
		}
		a[xx][yy]=z[i];
		t%=4;
			xx+=x[t];
			yy+=y[t];
	}
	cout<<a[o-1][p-1];

	return 0;
}