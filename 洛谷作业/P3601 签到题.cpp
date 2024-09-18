#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define MAXN 1000005
#define MOD 666623333
using namespace std;
long long l,r,ans,BASE;
int cnt;
bool isprime[MAXN];
long long prime[MAXN],A[MAXN],B[MAXN];
void shai()
{
    for(int i=2;i<=MAXN;i++)
    {
        if(!isprime[i]) prime[++cnt]=i;
        for(int j=2*i;j<=MAXN;j+=i)
            isprime[j]=1;
    }
}
void work()
{
	int i=1;
    while(prime[i]*prime[i]<=r)
    {
    	long long p=prime[i];
    	for(int x=(p-l%p)%p;x<=r-l;x+=p)
    	{
    		A[x]/=p,A[x]*=p-1;
    		while(B[x]%p==0)
				B[x]/=p;
		}i++;
	}
}
int main()
{
    shai();
    scanf("%lld%lld",&l,&r);BASE=l;
    for(long long i=l;i<=r;i++)
    	A[i-BASE]=i,B[i-BASE]=i;
    work();
    for(int i=0;i<=r-l;i++) 
	{
    	if(B[i]!=1) A[i]/=B[i],A[i]*=(B[i]-1);
		ans=(ans+i+BASE-A[i])%MOD;
	}
	printf("%lld",ans);
    return 0;
}