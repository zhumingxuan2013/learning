#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=51;
int n,k; 
string s;
struct hd{
    int len;
    int d[maxn];
};  
hd f[maxn][50];
void init(hd &A,int l,int r)
{
    A.len=r-l+1;
    for(int i=1,j=r-1;j>=l-1;i++,j--)
        A.d[i]=s[j]-'0'; 
}
void mul(hd &Z,hd X,hd Y)
{ 
    for(int i=1;i<maxn;i++)
        Z.d[i]=0;
    for(int i=1;i<=X.len;i++)
        for(int j=1;j<=Y.len;j++)
            Z.d[i+j-1]+=X.d[i]*Y.d[j];
    for(int i=1;i<maxn;i++)
    {
        Z.d[i+1]+=Z.d[i]/10;
        Z.d[i]=Z.d[i]%10;
    }
    int i;
    for(i=maxn-1;i>1;i--)
        if(Z.d[i])break;
    Z.len=i; 
}
void pr(hd X)
{
    for(int i=X.len;i>=1;i--)
        cout<<X.d[i];
    cout<<endl;
}
bool bigger(hd X,hd Y)
{
    if(X.len!=Y.len)
        return X.len>Y.len;
    for(int i=X.len;i>=1;i--)
        if(X.d[i]!=Y.d[i])
            return X.d[i]>Y.d[i];
}
int main()
{
    cin>>n>>k;
    cin>>s;
    for(int i=1;i<=n;i++)
        init(f[i][0],1,i);
    for(int j=1;j<=k;j++)
        for(int i=j+1;i<=n;i++)
        {
            f[i][j].len=0; 
            hd X,Y;
            for(int k=j;k<i;k++)
            {
                init(Y,k+1,i);
                mul(X,f[k][j-1],Y);
                if(bigger(X,f[i][j]))
                    f[i][j]=X;
            }
        }
    pr(f[n][k]);
    return 0;	
}