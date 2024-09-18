#include<set>  
#include<map>  
#include<list>  
#include<queue>  
#include<stack>  
#include<string>  
#include<math.h>  
#include<time.h>  
#include<vector>  
#include<bitset>  
#include<memory>  
#include<utility>  
#include<stdio.h>  
#include<sstream>  
#include<iostream>  
#include<stdlib.h>  
#include<string.h>  
#include<algorithm>
//管理员气势磅礴的头文件，只借用了头文件
using namespace std;
int a[101][101],f[101],v[101],c[101],n,t,x,y,z;
void dfs(int step){
	if(v[step]==1) return;
	v[step]=1;
	for(int i=1;i<=n;i++){
		f[i]+=a[step][i];
		if(f[i]>50){
			c[i]=1;
			dfs(i);
		}
	}
}
int main() {
	cin>>t;
	while (t--) cin>>x>>y>>z,a[x][y]=z,n=max(max(x,y),n);
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v)),memset(c,0,sizeof(c)),memset(f,0,sizeof(f)),dfs(i); 
		for(int j=1;j<=n;j++)if(c[j]&&i!=j)
		cout<<i<<" "<<j<<"\n";
	}
	return 0;
}