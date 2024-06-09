#include <iostream>

using namespace std;
bool n(int a,int b,int c,int d,int e,int f){
	if (!(a==1||b==1)) {
		return false;
	}
	if (a==1||d==1) {
		return false;
	}
	if (a==1||d==1) {
		return false;
	}
	int sum=0;
	if (a==1) {
		sum++;
	}
	if (f==1) {
		sum++;
	}
	if (e==1) {
		sum++;
	}
	if (!(b==1&&c==1||b==0&&c==0)) {
		return false;
	}
	sum=0;
	if (c==1) {
		sum++;
	}
	if (d==1) {
		sum++;
	}
	if (sum!=1) {
		return false;
	}
	if (d==0) {
		if (e!=0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a1,b1,c1,d1,e1,f1;
	for (int a=0; a<2; a++) {
		a1=a;
		for (int b=0; b<2; b++) {
			b1=b;
			for (int c=0; c<2; c++) {
				c1=c;
				for (int d=0; d<2; d++) {
					d1=d;
					for (int e=0; e<2; e++) {
						e1=e;
						for (int f=0; f<2; f++) {
							f1=f;
							if (n(a1,b1,c1,d1,e1,f1)) {
								
								cout<<a1<<" ";
								cout<<b1<<" ";
								cout<<c1<<" ";
								cout<<d1<<" ";
								cout<<e1<<" ";
								cout<<f1<<" ";
							}
						}
					}
				}
			}
		}
	}
}