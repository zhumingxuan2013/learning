#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstdio>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include<string.h>
using namespace std;
double distance1,capacity1,km,cost1;
int n;
double ans=10000000000;
struct node{
	double distance2,cost2;
}a[10001];
void dfs(int pos,double step,double sum){
	if(sum>=ans){
		return;
	}
	if (pos>n) {
		ans=sum;
		return;
	}
	double distance3=a[pos+1].distance2-a[pos].distance2;
	if (step<capacity1/2||step*km<distance3) {
		dfs(pos+1,capacity1-distance3/km,sum+(capacity1-step)*a[pos].cost2+20);
	}
	if(step*km>=distance3){
		dfs(pos+1,step-distance3/km,sum); 
	}
}
int main() {
	cin>>distance1>>capacity1>>km>>cost1>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i].distance2>>a[i].cost2;
	}
	a[n+1].distance2=distance1;
	dfs(1,capacity1-a[1].distance2/km,cost1);
	printf("%.1f",ans);
	return 0;
}