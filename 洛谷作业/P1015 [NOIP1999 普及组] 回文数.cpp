#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int n,a[101],b[101],ans,i;
void init(int a[])                         //Ω´ ˝¥Æs◊™ªØŒ™’˚ ˝ ˝◊Èa
{
	string s;
	cin>>n>>s;                        //∂¡»Î◊÷∑˚¥Æs
	memset(a,0,sizeof(a));           
	a[0]=s.length();                  //”√a[0]º∆À„◊÷∑˚¥ÆsµƒŒª ˝
	for(i=1; i<=a[0]; i++)
	{
		if(s[a[0]-i]>='0'&&s[a[0]-i]<='9')
		{
			a[i]=s[a[0]-i]-'0';
		}
		else
		{
			a[i]=s[a[0]-i]-'A'+10;
		}
	}

}
bool check(int a[])          //≈–±’˚ ˝ ˝◊Èa «∑ÒŒ™ªÿŒƒ ˝
{
	for(i=1; i<=a[0]; i++)
	{
		if(a[i]!=a[a[0]-i+1])
		{
			return false;
		}
	}
	return true;
}
void  jia(int a[])          //’˚ ˝ ˝◊Èa”Î∆‰∑¥–Ú ˝bΩ¯––nΩ¯÷∆º”∑®‘ÀÀ„
{
	for(int i=1; i<=a[0]; i++)
	{
		b[i]=a[a[0]-i+1];    //∑¥–Ú ˝b
	}
	for(int i=1; i<=a[0]; i++)
	{
		a[i]+=b[i];          //÷Œªœ‡º”
	}
	for(int i=1; i<=a[0]; i++)                     //¥¶¿ÌΩ¯Œª
	{
		a[i+1]+=a[i]/n;
		a[i]%=n;
	}
	if(a[a[0]+1]>0)
	{
		a[0]++;    //–ﬁ’˝–¬µƒaµƒŒª ˝£®a+b◊Ó∂‡÷ªƒ‹µƒ“ª∏ˆΩ¯Œª£©
	}
}
int main()
{
	init(a);
	if(check(a))
	{
		cout<<"STEP=0"<<endl;
		return 0;
	}
	ans=0;                            //≤Ω ˝≥ı ºªØŒ™0
	while(ans++<=30)
	{
		jia(a);
		if(check(a))
		{
			cout<<"STEP="<<ans<<endl;
			return 0;
		}
	}
	cout<<"Impossible!"<<endl;             // ‰≥ˆŒﬁΩ‚–≈œ¢
	return 0;
}
