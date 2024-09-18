#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],b[n],c[n],d[n],f[n];
	for (int i=0; i<n; i++) {
		f[i]=i+1;
		cin>>a[i]>>b[i]>>c[i];
		d[i]=a[i]+b[i]+c[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			if (d[i]<d[j]) {
				swap(d[i], d[j]);
				swap(a[i], a[j]);
				swap(b[i], b[j]);
				swap(c[i], c[j]);
				swap(f[i], f[j]);
			}
			if (d[i]==d[j]) {
				if (a[i]==a[j]) {
					if (f[i]>f[j]) {
						swap(d[i], d[j]);
						swap(a[i], a[j]);
						swap(b[i], b[j]);
						swap(c[i], c[j]);
						swap(f[i], f[j]);
					}
				}
				if (a[i]<a[j]) {
					swap(d[i], d[j]);
					swap(a[i], a[j]);
					swap(b[i], b[j]);
					swap(c[i], c[j]);
					swap(f[i], f[j]);
				}
			}
		}
	}
	for (int i=0; i<5; i++) {
		cout<<f[i]<<" "<<d[i]<<endl;
	}
	return 0;
}