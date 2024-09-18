#include<iostream>
#include<cmath>
#define f1 for(long long i=500;i>=1;i--)
#define f2 for(long long i=1;i<=500;i++)
using namespace std;
long long POW(int a){
    long long res=1;
    for(int i=1;i<=a;i++)res*=2;
    return res;
}

long long a[501];
int main(){
    long long p;
    cin>>p;
    cout<<ceil(p*log10(2))<<endl; 
    long long tmp=POW(32); 
    long long t32=p/32;
    long long t1=p-t32*32;
    a[500]=1;
    while (t32--) {
        f1{
            a[i]*=tmp;
        }
        f1{
            a[i-1]+=a[i]/10;
            a[i]%=10;
        }
    }
    while (t1--) {
        f1{
            a[i]*=2;
        }
        f1{
            a[i-1]+=a[i]/10;
            a[i]%=10;
        }
    }
    a[500]--;
    f2{
        cout<<a[i];
        if(i%50==0) cout<<endl;
    }
    return 0;
}