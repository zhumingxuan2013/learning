#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int l,n;
struct node{
	int o,b;
}a[200];

bool cmp(node x,node y){
	return x.b>y.b;}
int main(){
	cin>>l;
	n=pow(2,l);
	for(int i=1;i<=n;i++){
		cin>>a[i].b;
		a[i].o=i;
	}
	sort(a+1,a+n/2+1,cmp);
	sort(a+n/2+1,a+n+1,cmp);
	if(a[1].b>a[n/2+1].b){
		cout<<a[n/2+1].o;
	}
	else{
		cout<<a[1].o;
	}
	return 0;
} 