#include<iostream>
using namespace std;
const int N=5e5+5;
int n,m,sd[N],feiyiyangdeganjue[N],skt,dfn[N],low[N],shishijiushishi[N],temp,ans;
int nx[N],to[N],sum,sz[N];
void tj(int x){
	sum++;
	dfn[x]=low[x]=sum;
	shishijiushishi[++temp]=x;
	for(int i=feiyiyangdeganjue[x];i;i=nx[i]){if(!dfn[to[i]]) tj(to[i]);if(!sd[to[i]]) low[x]=min(low[x],low[to[i]]);	}
	if(low[x]==dfn[x]){sd[x]=++skt;sz[skt]=1;while(shishijiushishi[temp]!=x){sd[shishijiushishi[temp]]=skt;sz[skt]++;temp--;}temp--;}
}
bool rd[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){int a,b;cin>>a>>b;nx[i]=feiyiyangdeganjue[a];feiyiyangdeganjue[a]=i;to[i]=b;}
	for(int i=1;i<=n;i++)if(!dfn[i]) tj(i);
	for(int i=1;i<=n;i++){for(int j=feiyiyangdeganjue[i];j;j=nx[j]){if(sd[i]!=sd[to[j]]){rd[sd[to[j]]]=1;}}}
	for(int i=1;i<=skt;i++) if(!rd[i])ans++;
	cout<<ans;
	return 0;
}
