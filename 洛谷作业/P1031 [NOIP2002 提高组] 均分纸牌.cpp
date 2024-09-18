#include <iostream>
using namespace std;
int main()
{
int a,p=0,js=0; cin >>a;int q[a];
for (int y=0;y<a;y++){cin >>q[y]; p+=q[y];} p/=a;
for (int y=0;y<a;y++)q[y]-=p;
for (int y=0;y<a;y++) {if (q[y]==0)continue; q[y+1]+=q[y]; js++; }
cout <<js;
return 0;
}