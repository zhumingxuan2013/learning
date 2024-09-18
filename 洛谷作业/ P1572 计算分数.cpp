#include<iostream>
#include<math.h>
using namespace std;
int jinitaimeigcd(int n,int m){

	if (n<m) {
		int i=m;
		m=n;
		n=i;
	}
	int r=n%m;
	while (r) {
		
		n=m;
		m=r;
		r=n%m;
	}
	return m;
}
int z,m,ans,ans2=1;
char shayebushi;
int main(){
    while(cin>>z>>shayebushi>>m){
        ans=z*ans2+m*ans,ans2=m*ans2;
        int gcd=jinitaimeigcd(ans,ans2);
		ans/=gcd,ans2/=gcd;
	}
	if(ans<0&&ans2<0)
		ans2=abs(ans),ans2=abs(ans2);
    else if(ans>0&&ans2<0)
		ans2=abs(ans2),printf("-");
	else if(ans<0&&ans2>0)
		ans=abs(ans),printf("-");
	if(ans==0)
		cout<<0;
	else if(ans2==1)
		printf("%d",ans);
	else 
		printf("%d/%d",ans,ans2);

    return 0; 
}