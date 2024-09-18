#include<iostream>
#include<cstring>
using namespace std;
int a[5000],b[5000],c[5000],lena,lenb,lenc,n,lens,cnt;
string s;
int main(){
    while (cin>>s>>n){
        lens=s.size(),cnt=s.find('.'),lena=0,cnt=(lens-1-cnt)*n;
        for (int i=0;i<lens;i++)if (s[lens-i-1]!='.')lena++,a[lena]=s[lens-i-1]-48;
        for (int i=0; i<5000; i++)c[i]=a[i];
        lenc=lena;
        for (int k=2;k<=n;k++){
            for (int i=0; i<5000; i++) b[i]=c[i];
            memset(c,0,sizeof(c)),lenb=lenc,lenc=lena+lenb; 
            for (int i=1;i<=lena;i++)for (int j=1;j<=lenb;j++)c[i+j-1]+=a[i]*b[j],c[i+j]+=c[i+j-1]/10,c[i+j-1]%=10;
            while (c[lenc]==0&&lenc>cnt) lenc--;
        }
        int a1=lenc,b1=1;
        while (c[a1]==0&&a1>cnt) a1--;
        while (c[b1]==0) b1++;
        for (int i=a1;i>=b1;i--){
            if (i==cnt)cout<<".";
            cout<<c[i];
        }
        cout<<"\n";
    } 
}