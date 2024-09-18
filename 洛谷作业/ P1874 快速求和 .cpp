#include <iostream>
using namespace std;
long long n,ans=1e12;
char s[50];
clock_t k;
void dfs(long long step,long long sum,long long w){
	if (clock()-k>1000){
		cout<<-1 ;exit(0);
	}
	if (sum>n) 
		return;
	else 
		for(int i=step,su=0;i<strlen(s)&&su+sum<=n;i++){
			su=su*10+s[i]-'0';
			if(sum+su==n&&i+1==strlen(s))ans=min(w+1,ans);
			if(su)
				dfs(i+1,sum+su,w+1);
		}
}
int main() {
	cin>>s>>n;
	k=clock();
	dfs(0,0,-1);
	if (ans==1e12){cout<<-1;exit(0);}
	cout<<ans;
	return 0;
}
	