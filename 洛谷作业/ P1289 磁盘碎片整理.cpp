#include<iostream>
int n,k,s,sum,cnt,a[100005],f[100005];
int dfs(int x){	if(!x||f[x]) return x;f[x]=1,cnt++;return dfs(a[x]);}
int main(){
	std::cin>>n>>k;
	for(int i=1;i<=k;i++){std::cin>>s;for(int j=1;j<=s;j++){std::cin>>a[sum+j];if(a[sum+j]==sum+j)f[sum+j]=1;}sum+=s;}	
	for(int i=1;i<=sum;i++){if(f[i]) continue;if(dfs(a[i])==a[i])cnt++;}	
	if(cnt){std::cout<<"We need "<<cnt<<" move operations.";exit(0);}	
	std::cout<<"No optimization needed.";
}