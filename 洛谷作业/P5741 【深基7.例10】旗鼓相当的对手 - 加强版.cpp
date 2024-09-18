#include <iostream>
using namespace std;
int n;
int a[1001],b[1001],c[1001],d[1001];
string e[1001];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>e[i]>>a[i]>>b[i]>>c[i];
		d[i]=a[i]+b[i]+c[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if(abs(a[i]-a[j])<=5
				&&abs(b[i]-b[j])<=5
				&&abs(c[i]-c[j])<=5
				&&abs(d[i]-d[j])<=10){
				cout<<e[i]<<" "<<e[j]<<"\n";
			}
		}
	}
	return 0;
}