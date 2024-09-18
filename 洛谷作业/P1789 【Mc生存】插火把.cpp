#include <iostream>
using namespace std;
int x,y,f[1201][1201];
int a,b,c;

void o(int xx,int yy){
	for (int i=xx-1 ;i<=xx+1;i++) {
		for (int j=yy-1; j<=yy+1; j++) {
			f[i][j]=0;
		
		}
	}
	f[max(xx-2, 0)][yy]=0;
	f[xx][max(yy-2, 0)]=0;
	f[xx+2][yy]=0;
	f[xx][yy+2]=0;

}
void p(int xx,int yy){
	for (int i=max(xx-2, 0) ;i<=xx+2;i++) {
		for (int j=max(yy-2, 0); j<=yy+2; j++) {
			f[i][j]=0;
		}
	}

}
int main() {
	cin>>a>>b>>c;
	for (int i=0; i<a+10; i++) {
		for (int j=0; j<a+10; j++) {
			f[i][j]=1;
		}
	}
	for (int i=0; i<b; i++) {
		cin>>x>>y;
		o(x,y);
	}
	for (int i=0; i<c; i++) {
		cin>>x>>y;
		p(x,y);
	}
	int cnt=0;
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=a; j++) {
			if (f[i][j]) {
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}