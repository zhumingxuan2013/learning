#include <iostream>
#define ll long long
using namespace std;
bool isr(int x){
	if ((x%4==0&&x%100!=0)||x%400==0)return 1;
	return 0;
}
bool iso(int x){
	if (x%2==1)return 1;
	return 0;
}
int s[12]{31,28,31,30,31,30,31,31,30,31,30,31};
ll C(int x,int y,int z){
	ll ans=0;
	for (int i=2018; i<x; i++) ans+=365+isr(i);
	for (int i=1; i<y; i++) ans+=s[i-1];
	if (isr(x)&&y>2) ans++;
	ans+=z;
	return ans;
}
ll K(int x,int y,int z){
	ll ans=0;
	for (int i=1; i<x; i++) ans+=915;
	for (int i=1; i<y; i++) ans+=30+iso(i);
	ans+=z;
	return ans;
}
void prc(ll x){
	int a=0,b=0,c=0,i=0;
	c=x;
	while (c>s[i]+(isr(a+2018)&&i==1&&a!=0)) { 
		b++;
		
		c-=s[i]+(isr(a+2018)&&i==1&&a!=0);
		i++;
		i%=12;
		a+=b/12;
		b%=12;
	}
	b++;
	
	cout<<a+2018<<" "<<b<<" "<<c;
}
void prk(ll x){
	int a=0,b=0,c=0,i=1;
	c=x;
	while (c>30+iso(i)) {
		b++;
		c-=30+iso(i);
		i++;
		i%=30;
	}
	a=b/30;
	b%=30;
	b++;
	a++;
	cout<<a<<" "<<b<<" "<<c;
}
int main() {
	char a;
	cin>>a;
	int x,y,z;
	cin>>x>>y>>z;
	if(a=='K') prc(K(x,y,z));
	else prk(C(x,y,z));
	return 0;
}