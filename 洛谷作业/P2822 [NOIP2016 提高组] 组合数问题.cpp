#include<iostream>
using namespace std;
long long t,n,m,k,f[2010][2010],s[2010][2010];
void c(){    
    for(int i=0;i<2001;i++){
    f[i][i]=1;
    f[i][0]=1;
    }
    for(int i=1;i<2001;i++)
        for(int j=1;j<i;j++)
        f[i][j]=(f[i-1][j-1]+f[i-1][j])%k;
    
    for(int i=1;i<2001;i++)
        for(int j=1;j<2001;j++)
        {
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1];
            if(f[i][j]==0&&j<=i)s[i][j]++;
        }
}
int main(){
    
    scanf("%lld%lld",&t,&k);
    c();
    for(int i=1;i<=t;i++)
    {
        long long ans=0;
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",s[n][m]);
    }
}