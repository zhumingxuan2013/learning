#include<iostream>
using namespace std;
int s[100],ans[100]={0},pos;
void jiecheng(int nn)
{
	int x,j;
		memset(s,0,sizeof(s));
		s[1]=1;
		
		pos=1;
		for(int i=2;i<=nn;i++)
		{
			x=0;
			for(j=1;j<=pos;j++)
			{
				s[j]=s[j]*i+x;
				x=s[j]/10;
				s[j]%=10;
			}
			while(x>0)
			{
				s[j]=x%10;
				x/=10;
				j++;
			}
			pos=j-1;
		
		}
		
	


}
int main()
{
	int n,h,lena=1,y;
	
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		y=0;
		jiecheng(i);
		for( h=1;h<=pos||h<=lena;h++)
		{
			ans[h]=ans[h]+s[h]+y;
			
			y=ans[h]/10;
			ans[h]%=10;
		}
		lena=h;
		if(y>0)
		{
			h++;
			ans[h]=y;
			lena=h;
		}
	
	}
while(ans[lena]==0&&lena>0) lena--;
	for(int i=lena;i>=1;i--) cout<<ans[i];
}
