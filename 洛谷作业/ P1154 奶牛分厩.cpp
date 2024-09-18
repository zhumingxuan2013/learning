#include<iostream>
int n,a[1000001],b[1000001];
int main(){
	std::cin>>n;
	for(int i=1;i<=n;i++)std::cin>>a[i];
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)b[abs(a[j]-a[i])]=1;
	for(int i=1;;i++){int f=1;for(int j=i;j<1000000;j+=i)if(b[j]){f=0;break;}if(f){std::cout<<i;return 0;}}
}