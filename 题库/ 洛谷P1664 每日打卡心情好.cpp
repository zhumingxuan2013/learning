#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a=0,lianxu=0,sum=0,m=0,n=0;
	cin>>a;
	while (a--) {
		cin>>n;
		if (n==1) {
			if (m>0) lianxu-=pow(2,m-1);
			if (lianxu<0)lianxu=0;
			m=0,sum++,lianxu++;
			if(lianxu>=3)sum++;
			if(lianxu>=7)sum++;
			if(lianxu>=30)sum++;
			if(lianxu>=120)sum++;
			if(lianxu>=365)sum++;
		}else m++; 
	}
	cout<<sum;
	return 0;
}