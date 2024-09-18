#include <string.h>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
#include<algorithm>
using namespace std;
int s,n,l,ss,r;
char a[1000001],b[10000001];
int main() {
    string a1,b1;
    getline(cin, a1);
    getline(cin, b1);
    
    for (int i=0 ; i<a1.size();i++) {
        a[i]=a1[i];
    }
    for (int i=0 ; i<b1.size();i++) {
        b[i]=b1[i];
    }
    strcat(a," "); 
    strcat(b," ");
    for (int i=0;a[i]!='\0';i++){if(a[i]>='a')a[i]-='a'-'A';}
    for (int i=0;b[i]!='\0';i++){if(b[i]>='a')b[i]-='a'-'A';}
    for (int i=0;b[i]!='\0';i++){if(b[i]==' ') {s=1;for (int j=n,k=0;j<=i&&a[k]!='\0';j++,k++) {if(b[j]!=a[k]) {s=0;}}if (s==1) {ss++;}if (ss==1&&s==1){r=n;}n=i;n++;}}
    if (ss==0) {
        cout<<-1;
    } 
    else if (ss>=1) {
        cout<<ss<<" "<<r;
    }
    return 0;
}