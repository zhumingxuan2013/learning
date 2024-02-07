#include <iostream>

using namespace std;
bool zs(int c){
	if (c==1||c==0)
		return false;
	for (int d=2; d<c; d++) {
		if (c%d==0)
			return false;
	}
	return true;
}
int main() {
	int a,b;
	cin>>a>>b;
	int f=0;
	for (int e=0;e<b; e++) {
		if (zs(e))
			f++;
	}
	int g[f];
	int h=0;
	for (int e=0;e<b; e++) {
		if (zs(e)) {
			g[h]=e;
			h++;
		}
	}
	for (int kk=a; kk<b; kk++) {
		int i=kk;
		cout<<i<<"=";
		int l=1;
		if (kk==1)
			cout<<1;
		for (int j=0; j<a*b; j++) {
			int k=0;
			if (zs(i)&&l==1) {
				cout<<i;
				l=0;
				break;
			}
			else if (zs(i)&&l==0) {
				cout<<"*"<<i;
				l=0;
				break;
			}
			else if (l==1&&!(zs(i))) {
				for (int l=0;l<i;l++) {
					if (i%g[k]==0) {
						i=i/g[k];
						cout<<g[k];
						break;
					}
					else
						k++;
				}
				l=0;
			}
			else{
				int k=0;
				for (int l=0; l<i; l++) {
					if (i%g[k]==0) {
						i=i/g[k];
						cout<<"*"<<g[k];
						break;
					}
					else
						k++;
				}
			}
		}
		cout<<endl;
	}
}