#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[20001],s2[20001];
	int a[20001],b[20001],c[4000000002];
	int i,j,lena,lenb,lenc,w,jinWei;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin>>s1>>s2;
	lena=strlen(s1);
	lenb=strlen(s2);
	for (i=0;i<lena;i++)
	{
		a[i]=s1[lena-1-i]-'0';
	}
	for (i=0;i<lenb;i++)
	{
		b[i]=s2[lenb-1-i]-'0';
	}
	jinWei=0;
	for (i=0;i<lena;i++)
	{
		for (j=0;j<lenb;j++) 
		{
			w=i+j;
			c[w]=c[w]+a[i]*b[j];
			jinWei=c[w]/10;
			c[w+1]=c[w+1]+jinWei;
			c[w]%=10;
		}
	}
	lenc=lena+lenb;
	while (c[lenc]==0&&lenc>0) 
	{
		lenc--;
	}
	for (i=lenc; i>=0; i--)
	{
		cout<<c[i];
	}
	return 0;
}