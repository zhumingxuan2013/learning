#include<algorithm> 
#include<iostream> 
int m,n,c,ans,a[201],sum[201];
bool cmp(int x,int y){
    return x>y;
}
int main() {
    std::cin>>m>>n>>c;
    for(int i=1;i<=c;i++)std::cin>>a[i];
    if(m>c) {std::cout<<c;exit(0);}
    std::sort(a+1,a+c+1);
    ans=a[c]-a[1]+1;
    for(int i=2;i<=c;i++)sum[i-1]=a[i]-a[i-1];
    std::sort(sum+1,sum+c,cmp);
    for(int i=1;i<=m-1;i++)ans=ans-sum[i]+1;
    std::cout<<ans;
}
