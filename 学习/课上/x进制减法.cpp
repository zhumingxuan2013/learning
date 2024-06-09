#include <iostream>
using namespace std;
const long long N=1000000007;
int main() {
	long long n;
	cin>>n;
	long long x,y;
	cin>>x;
	long long x1[x],l[x];
	long long ans1=0; 
	for (int i=x-1; i>=0; i--) {
		cin>>x1[i];
		
	}

	long long ans2=0;
	cin>>y;
	long long y1[y];
	long long m[max(x, y)+1],p[max(x, y)+1],d[max(x, y)+1];
	for (int i=y-1; i>=0; i--) {
		cin>>y1[i];
		
	}
	for (long long i=max(x, y)-1; i>=0; i--) {
		m[i]=max(x1[i], y1[i])+1;		
		if (m[i]<2) {
			m[i]=2;
		}
		
	}
	d[0]=1;
	for(long long i=1;i<max(x,y);i++){
		d[i]=(d[i-1]%N*m[i-1]%N)%N;
	}
	for(int i=x-1;i>=0;i--){
		ans1+=x1[i]*d[i];
		ans1%=N;
	}
	for(int i=y-1;i>=0;i--){
		ans2+=y1[i]*d[i];
		ans2%=N;
	}
	cout<<(ans1-ans2+N)%N;
	return 0;
}