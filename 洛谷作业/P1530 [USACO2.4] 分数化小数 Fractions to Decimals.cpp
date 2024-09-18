#include<iostream>
#include<math.h>
#define ans if(len==76){printf("\n");len=0;}
#define ans1 for(int i=1;i<k;i++){printf("%d",an[i]),len++;ans}printf("("),len++;ans
#define ans2 for(int i=k;i<=kk;i++){printf("%d",an[i]),len++;ans}printf(")"),len++;ans
using namespace std;
int d=100000000,c,a,b,f[2000000],an[2000000],len,i=0;
int main(){
    memset(f,-1,sizeof(f));
    scanf(" %d %d",&a,&b);
    c=a/b;
    if(a%b==0){printf("%d.0",c);return 0; }
    else{
        if(!c) len=2;else len=log10(c)+2;
        printf("%d.",a/b);
        int y=a%b,k=-1,kk=-1;
        f[y%b]=0;
        while(d--){
            if(y==0){for(int j=1;j<=i;j++){printf("%d",an[j]),len++;ans}return 0;}
            i++,y*=10,an[i]=y/b; 
            if(f[y%b]!=-1){k=f[y%b]+1;kk=i;break;}
            f[y%b]=i,y=y%b;
        }
        ans1 ans2
    }
}