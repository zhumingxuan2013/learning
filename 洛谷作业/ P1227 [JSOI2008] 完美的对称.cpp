#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct node{double x,y;}ans[100001];
bool cmp(node x,node y){if(x.y==y.y) return x.x<y.x;return x.y<y.y;}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i) scanf("%lf%lf",&ans[i].x,&ans[i].y);
	sort(ans+1,ans+n+1,cmp);
	double x1=(ans[1].x+ans[n].x)/2,y1=(ans[1].y+ans[n].y)/2;
	for(int i=2;i<=n/2;++i){double x2=(ans[i].x+ans[n-i+1].x)/2,y2=(ans[i].y+ans[n-i+1].y)/2;if(x1!=x2||y1!=y2){printf("This is a dangerous situation!");return 0;}}
	printf("V.I.P. should stay at (%.1f,%.1f).",x1,y1);
}