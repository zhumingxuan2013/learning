#include<iostream>
using namespace std;
int a,b,l,r,c,t,x;
int ans[10000001];
int main(){
	cin>>a>>b>>l>>r>>c;
	for(int k=a;k<=b;k++)
		for(int i=1;i<k;i++)
			for(int j=0;j<k;j++){
				x=t=0;
				if(i!=j)
					while(x<=r){
						x=x*k+(t%2==0?i:j);
						t++;
						if(x>=l&&x<=r) ans[x]++;
					}
			}
	for(int i=l;i<=r;i++)if(ans[i]==c)cout<<i<<"\n";
}