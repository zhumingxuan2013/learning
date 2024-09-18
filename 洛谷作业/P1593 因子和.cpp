#include<iostream>
#include<cstdio>
#define mod 9901
using namespace std;

int a,b,sa,n[10010][2],cot=0,ans=1;

int quick_pow(int ml,int nl)
{
	int s=1;
	while(nl>0)
	{
		if(nl%2==1)
		{
			s=(s%mod)*(ml%mod)%mod;
		}
		ml=ml*ml%mod;
		nl=nl>>1;
	}
	return s%mod;
}

int sum(int x,int y)
{
	int k=0;
	y=y*b;
	if(x%mod==1)
	{
		k=(y+1)%mod;
	}
	else
	{
		k=(quick_pow(x%mod,y+1)-1)%mod*quick_pow((x-1)%mod,mod-2)%mod;
	}
	
	return k%mod;
}

int main()
{
	scanf("%d%d",&a,&b);
	if(a==0)
	{
		printf("0\n");
		return 0;
	}
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			cot++;
			n[cot][0]=i;
			n[cot][1]=1;
			a=a/i;
			while(a%i==0)
			{
				n[cot][1]++;
				a=a/i;
			}
		}
	}
	if(a!=1)
	{
		cot++;
		n[cot][0]=a;
		n[cot][1]=1;
	}
	for(int i=1;i<=cot;i++)
	{
		ans=ans*sum(n[i][0],n[i][1])%mod;
	}
	printf("%d\n",(ans%mod+mod)%mod);
	return 0;
}