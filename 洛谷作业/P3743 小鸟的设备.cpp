#include <iostream>
using namespace std;
double n,q,a[10000005],b[10000005];

bool k(double m){
	double sum=0;
	for(int i=1;i<=n;i++){
		if(b[i]<m*a[i]){
			sum+=m*a[i]-b[i];
		}
	}
	return sum<=q*m;
	
}
int main() {
	cin>>n>>q;
	double l=0,r;

	for (long long i=1; i<=n; i++) {
		cin>>a[i]>>b[i];

		r+=a[i];
	}	
	if (r<=q) {
		cout<<-1;
		return 0;
	}
	r=1e10+1;
	while (r-l>0.00001) {
		double m=(r+l)/2;
		
		if (k(m)) {
			l=m;
		}else {
			r=m;
		}
	}
	printf("%.10f",l);
	return 0;
}