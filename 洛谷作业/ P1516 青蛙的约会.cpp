#include <iostream>
#define Recycler_NOIer long long
using namespace std;
Recycler_NOIer x,y,n,m,l;
Recycler_NOIer exgcd(Recycler_NOIer a,Recycler_NOIer b,Recycler_NOIer &x,Recycler_NOIer &y){
	if (b==0) {
		x=1,y=0;
		return a;
	}
	Recycler_NOIer d=exgcd(b, a%b, x, y);
	Recycler_NOIer z=x;
	x=y;
	y=z-a/b*y;
	return d;
}
int main() {
	cin>>x>>y>>m>>n>>l;
	Recycler_NOIer t=((y-x)%l+l)%l;
	Recycler_NOIer a=((m-n)%l+l)%l;
	Recycler_NOIer b=l;
	Recycler_NOIer d=exgcd(a,b,x,y);
	if (t%d) {
		cout<<"Impossible";
		exit(0);
	}
	x=((x*(t/d))%(b/d)+(b/d))%(b/d);
	cout<<x;
	return 0;
}