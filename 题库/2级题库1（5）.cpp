#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin>>a>>b;
	int c[b];	//第几盏灯
	int d[a];	//a盏灯状态
	for (int i=0; i<b; i++) {
		cin>>c[i];
	}
	for (int i=0; i<a; i++) {
		d[i]=0;
	}
	d[c[0]-1]=1;
	int f = c[0];
	for (int i = 0; i < b; i++) {
		if(d[c[i]-2]==1||d[c[i] > a ? c[0] : c[i]] == 1){
			if(d[c[i]-1] != 1){
				d[c[i]-1]=1;
				f=c[i];
			}
		}
	}
	int j = 1;
	for (int i=0; i<a; i++) {
		if (d[i]==0) {
			j = 0;
		}
	}
	if (!j) {
		cout<<"NO";
	}else {
		cout<<c[0]<<" "<<f;
	}
	return 0;
}