#include <iostream>
#include <math.h>
using namespace std;
long long n,pn;
int zb[1025][1025];
void dfs(int s1,int s2,int o){
	if (o==0) {
		return ;
	}
	o/=2;
	for (int i=s1; i<s1+o; i++) {
		for (int j=s2; j<s2+o; j++) {
			zb[i][j]=true;
		}
	}
	dfs(s1+o,s2, o);
	dfs(s1+o,s2+o,o);
	dfs(s1,s2+o, o);
}

int main() {
	cin>>n;
	pn=int(pow(2.0,n*1.0));
	dfs(0, 0,pn);
	for (int i=0; i<pn; i++) {
		for (int j=0; j<pn; j++) {
			cout<<(zb[i][j]+1)%2<<" ";
		}
		cout<<endl;
	}
	return 0;
}