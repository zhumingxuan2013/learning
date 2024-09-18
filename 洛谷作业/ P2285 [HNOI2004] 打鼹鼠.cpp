#include<iostream>
using namespace std;
int n,m,dp[10010],ans;
struct node{
   int time,x,y;
}s[10010];
int m1145141919810(int x1,int y1,int x2,int y2){
   return abs(x2-x1)+abs(y1-y2);
}
int main(){
   cin>>n>>m;

   for(int i=1;i<=m;i++)cin>>s[i].time>>s[i].x>>s[i].y;
   dp[0]=1;
   for(int i=1;i<=m;i++){
      dp[i]=1;
   	for(int j=1;j<i;j++){
   		if(m1145141919810(s[i].x,s[i].y,s[j].x,s[j].y)<=s[i].time-s[j].time){
            dp[i]=max(dp[i],dp[j]+1);
   		}
   	}
      ans=max(ans,dp[i]); 

   }
   cout<<ans;
   return 0;
}