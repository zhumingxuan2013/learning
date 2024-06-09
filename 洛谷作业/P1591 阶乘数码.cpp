#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--) {
		int pos=1,j,i,s[3001],n,a,x,cnt=0;
		memset(s, 0, sizeof(s));
		s[1]=1;
		cin>>n>>a;
		for (i=1; i<=n; i++) {
			x=0;
			for (j=1 ;j<=pos;j++) {
				s[j]=s[j]*i+x;
				x=s[j]/10;
				s[j]%=10;
			}
			while (x>0) {
				s[j]=x%10;
				x/=10;
				j++;
			}
			pos=j-1;
		}
		for (int h=1; h<=pos; h++) {
			if (s[h]==a) {
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}