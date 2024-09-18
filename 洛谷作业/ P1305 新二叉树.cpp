#include <iostream>
#include <map>
using namespace std;
map<char,char> lefta;
map<char,char> righta;
void d(char ans)
{
	cout<<ans;
	if(lefta[ans]!='*') 
		d(lefta[ans]);
	if(righta[ans]!='*') 
		d(righta[ans]);
}
int main()
{
	int n;
	char root;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char a,b,c;
		cin>>a>>b>>c;
		if(!i) root=a;
		lefta[a]=b;
		righta[a]=c;
	 }
	 d(root);
}