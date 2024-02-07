#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	double q;
	string w;
	double p[a],o[a];
	for (int i=0; i<a; i++) {
		p[i]=0;
		o[i]=0;
	}

	for (int i=0; i<a; i++) {
		cin>>w>>q;
		if (w=="male") {
			o[i]=q;
		}
		else {
			p[i]=q;
		}
	}
	
	double c;
	for (int x=0; x<a-1; x++) {
		for (int y=0; y<a-1-x; y++) {
			if(o[y] > o[y+1])
				swap(o[y],o[y+1]);
		}
	}
	
	for (int x=0; x<a-1; x++) {
		for (int y=0; y<a-1-x; y++) {
			if(p[y] < p[y+1])
				swap(p[y],p[y+1]);
		}
	}
	for (int i=0 ;i<a;i++ ) {
		if (o[i]!=0) {
			cout<<o[i]<<" ";
		}
	}
	for (int i=0 ;i<a;i++ ) {
		if (p[i]!=0) {
			cout<<p[i]<<" ";
		}
	}
	return 0;
}