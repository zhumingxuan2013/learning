#include <iostream>
#define upleft dfs(x2+step-1,y2+step-1,x2,y2,step);
#define upright dfs(x2+step-1,y2+step,x2,y2+step,step);
#define downleft dfs(x2+step,y2+step-1,x2+step,y2,step);
#define downright dfs(x2+step,y2+step,x2+step,y2+step,step);
using namespace std;
void dfs(int x1,int y1,int x2,int y2,int step){
	if (step==1)return;
	step>>=1;
	if (x1-x2<step) {
		if (y1-y2<step) {
			cout<<x2+step<<" "<<y2+step<<" "<<1<<"\n";
			dfs(x1,y1,x2,y2,step);

			upright
			downleft
			downright
		}else {
			cout<<x2+step<<" "<<y2+step-1<<" "<<2<<"\n";
			dfs(x1,y1,x2,y2+step,step);
			upleft
			downleft
			downright
		}
	}else {
		if (y1-y2<step) {
			cout<<x2+step-1<<" "<<y2+step<<" "<<3<<"\n";
			dfs(x1,y1,x2+step,y2,step);
			upright
			upleft
			downright
		}else {
			cout<<x2+step-1<<" "<<y2+step-1<<" "<<4<<"\n";
			dfs(x1,y1,x2+step,y2+step,step);
			upleft
			upright
			downleft
		}
	}
	
}
int main() {
	int n,b,c;
	cin>>n>>b>>c;
	dfs(b, c, 1, 1, 1<<n);
	return 0;
}