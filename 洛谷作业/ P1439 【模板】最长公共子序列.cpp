#include<iostream>
#define zikun999 	int n;cin>>n;for(int i=1;i<=n;i++){cin>>a[i];m[a[i]]=i;}for(int i=1;i<=n;i++){cin>>b[i];ans[i]=1919810;}int len=0;ans[0]=0;for(int i=1;i<=n;i++){int l=0,r=len,mid;if(m[b[i]]>ans[len])ans[++len]=m[b[i]];else {	while(l<r){			mid=(l+r)/2;		if(ans[mid]>m[b[i]])r=mid;		else l=mid+1; 	}ans[l]=min(m[b[i]],ans[l]);}}cout<<len;
	
#include<cstdio>
using namespace std;
int a[100001],b[100001],m[100001],ans[100001];
int main()
{zikun999
	    return 0;
}