#include <iostream>
#include <algorithm>
using namespace std;
int  t1,t2,t3,step,ans[1001],v[21][21][21];
void dfs(int  a,int  b,int  c){
	if(v[ a][ b][ c])return;
	if( !a)ans[++step]= c;
	v[ a][ b][ c]=1;
	if( c){
		if( a< t1)dfs(min( t1, a+ c), b, c-(min( t1, a+ c)- a));
		if( b< t2)dfs( a,min( b+ c, t2), c-(min( t2, b+ c)- b));
	}
	if( b){
		if( a< t1)dfs(min( t1, a+ b), b-(min( t1, a+ b)- a), c);
		if( c< t3)dfs( a, b-(min( t3, c+ b)- c),min( t3, c+ b));
	}
	if( a){
		if( b< t2)dfs( a-(min( t2, a+ b)- b),min( t2, a+ b), c);
		if( c< t3)dfs( a-(min( t3, a+ c)- c), b,min( t3, c+ a));
	}
	return;
}
int main() {
	scanf("%d%d%d",&t1,&t2,&t3);
	dfs(0,0,t3);
	sort(ans+1,ans+step+1);
	for(int i=1;i<=step;i++)printf("%d ",ans[i]);
	return 0;
}