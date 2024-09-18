#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#define maxn 50010
using namespace std;
typedef long long ll;
ll read()
{
    ll x=0,f=1;
    char ch=getchar();
    while(ch-'0'<0||ch-'0'>9){if(ch=='-') f=-1;ch=getchar();}
    while(ch-'0'>=0&&ch-'0'<=9){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
struct P{
    int p,c;
}a[maxn];
int n,k;
ll m;
bool cmp(P x,P y)
{
    return x.c<y.c;
}
priority_queue<int,vector<int>,greater<int> >q1;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q2,q3;
int book[maxn];
int main()
{
    n=read();k=read();m=read();
    for(int i=1;i<=n;i++)
    {
        a[i].p=read();
        a[i].c=read();
    }
    sort(a+1,a+n+1,cmp);
    ll now=0;
    for(int i=1;i<=k;i++)
    {
        now+=a[i].c;
        if(now>m)
        {
            printf("%d\n",i-1);
            return 0;
        }
        q1.push(a[i].p-a[i].c);
    }
    if(k==n)
    {
        printf("%d\n",n);
        return 0;
    }
    for(int i=k+1;i<=n;i++)
    {
        q2.push(make_pair(a[i].c,i));
        q3.push(make_pair(a[i].p,i));
    }
    int ans=k;
    for(int i=k+1;i<=n;i++)
    {
        while(book[q2.top().second])  q2.pop();
        while(book[q3.top().second])  q3.pop();
        int p1=q2.top().second;
        int p2=q3.top().second;
        int tmp1=q2.top().first+q1.top();
        int tmp2=q3.top().first;
        if(tmp1<tmp2)
        {
            now+=tmp1;
            q1.pop();q2.pop();
            q1.push(a[p1].p-a[p1].c);
            book[p1]=1;
        }
        else{
            now+=tmp2;
            q3.pop();
            book[p2]=1;
        }
        ans++;
        if(now>m)
        {
            printf("%d\n",ans-1);
            return 0;
        }
    }
    printf("%d\n",n);
    return 0;
}