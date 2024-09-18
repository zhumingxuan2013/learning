#include<iostream>
using namespace std;
int a,b,x,y,d;
int exgcd(int a,int b,int &x,int &y){if(b==0){x=1,y=0;return a;}int d=exgcd(b,a%b,x,y),tmp=x;x=y,y=(tmp-a/b*y);return d;}
int main(){
	cin>>a>>b;
	d=exgcd(a,b,x,y);
	a=-a,x=-x,a=a/d,b/=d;
	while(x<0||y<0)x+=b,y-=(x>=0)*a;
	cout<<d<<"\n"<<x<<" "<<y;
}