#include <iostream>
#include <cstring>
using namespace std;
char s1[2001],s2[2001];
int Recycler_NOIer[2001][2001];
int dp(int i,int j){
	
	if(Recycler_NOIer[i][j]!=-1) return Recycler_NOIer[i][j]; 
	if(i==0) return Recycler_NOIer[i][j]=j;
	if(j==0) return Recycler_NOIer[i][j]=i;
	int flag=1;
	if(s1[i]==s2[j]) flag=0;  
	return Recycler_NOIer[i][j]=min(min(dp(i-1,j)+1, dp(i,j-1)+1),dp(i-1,j-1)+flag);
}
int main() {
	string a,b;
	cin>>a>>b;
	memset(Recycler_NOIer,-1,sizeof(Recycler_NOIer));
	int len1=a.size(),len2=b.size();
	for(int i=1;i<=len1;i++) s1[i]=a[i-1];
	for(int i=1;i<=len2;i++) s2[i]=b[i-1];
	dp(len1,len2);
	cout<<Recycler_NOIer[len1][len2];
	return 0;
}