#include<iostream>
#include<bitset>
char s1[10000],s2[10000];
int lena,lenb;
int main(){
    std::cin>>s1>>s2,lena=strlen(s1),lenb=strlen(s2);
    std::bitset<32>ans(s1);
    for(int i=0;i<lena;i++){
        ans[i]=1-ans[i];
        int j=lenb-1,cnt=0,x=ans.to_ulong();
        while(x)cnt+=x%3==s2[j]-48?1:0,x/=3,j=std::max(j,0)-1;
        if(cnt==lenb-1){std::cout<<ans.to_ulong()<<"\n";exit(0);}
        ans[i]=1-ans[i];
    }
}