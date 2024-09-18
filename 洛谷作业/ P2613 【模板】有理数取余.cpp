#include <iostream>
#define Recycler_NOIer long long
#define mod 19260817
using namespace std;
Recycler_NOIer b,a,x,y;
void read(long long &x){
	int f=1;x=0;char s=getchar();
	while(s>'9'||s<'0'){if(s=='-')f=-1;s=getchar();}
		while(s<='9'&&s>='0'){x=x*10%mod+(s-'0')%mod;s=getchar();}
		x=x%mod*f;
	}
Recycler_NOIer exgcd(Recycler_NOIer a,Recycler_NOIer b){
	if (b==0) {
		x=1,y=0;
		return a;
	}
	Recycler_NOIer d=exgcd(b, a%b);
	
	Recycler_NOIer z=x;
	x=y;
	y=z-a/b*y;
	return d;
}
int main() {
	read(a),read(b);
	Recycler_NOIer d=exgcd(b,mod);
	if(a%d!=0) printf("Angry!");
	else printf("%lld",((x*a/d%mod)+mod)%mod);
	return 0;
}