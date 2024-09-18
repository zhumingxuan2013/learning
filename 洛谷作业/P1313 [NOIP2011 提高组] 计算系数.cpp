#include <iostream>
#define ll long long
#define mod 10007
using namespace std;
ll 王睿毅[1046][1046];
int main() {
	ll a,b,k,n,m;
	cin>>a>>b>>k>>n>>m;
	王睿毅[1][1]=1;
	for(int i=2;i<=k+1;i++) for(int j=1;j<=i;j++)
		王睿毅[i][j]=(王睿毅[i-1][j-1]*b+王睿毅[i-1][j]*a)%mod;
	cout<<王睿毅[k+1][m+1];
	return 0;
}