#include<iostream>
char s[20001],s1[20001],s2[20001];
int l,l3,sum2[20001],sum3[20001],l2,ans,left1,right1,sum[20001]{1},mr=0,cnt=0;
int main(){
    while(~(s[l]=getchar()))l++;
    for(int i=0;i<l;i++)if((s[i]>='a'&&s[i]<='z') || (s[i]>='A' and s[i]<='Z'))s1[l3]=s[i],sum2[l3]=i,l3++;
    for(int i=0;i<l3;i++)if(s1[i]>='a'&&s1[i]<='z')s1[i]-='a'-'A';
    for(int i=0;i<l3;i++)s2[2*i+1]=s1[i],sum[2*i+1]=sum2[i];
    l2=2*l3+1;
    for(int i=1;i<l2;i++){if(i<=mr)sum3[i]=std::min(sum3[2*cnt-i],mr-i);else sum3[i]=1;while(i-sum3[i]>=0&&i+sum3[i]<l2&&s2[i+sum3[i]]==s2[i-sum3[i]])sum3[i]++;if(i+sum3[i]-1>mr)mr=i+sum3[i]-1,cnt=i;if(sum3[i]-1>ans){ ans=sum3[i]-1; left1=i-sum3[i]+2; right1=i+sum3[i]-2;}}
    std::cout<<ans<<"\n";
    for(int i=sum[left1];i<=sum[right1];i++)std::cout<<s[i];
}