#include <iostream>

using namespace std;
int main() {
  int a,c,m=0,k=1000,t=0;
  cin>>a;
  double b[a],l[a-2];
  for (int i=0; i<a; i++) {
    cin>>b[i];
  }
  
  
  k=b[a];
  t=b[a-1];
  for (int x=1; x<=a; x++) {
    for (int y=1; y<=a; y++) {
      if (b[y]<b[y-1]) {
        c=b[y];
        b[y]=b[y-1];
        b[y-1]=c;
      }
    }
  }
  for (int i=0; i<a; i++) {
    if (b[i]>k) {
      k=b[i];
    }
  }
  for (int i=0; i<a; i++) {
    if (b[i]<k) {
      t=b[i];
    }
  }

  c=0;
  c=b[0];
  b[0]=b[a-2];
  b[a-2]=c;
  a = a-2;
  
  for (int i=0; i<a; i++) {
    l[i]=b[i];
  }
  for (int i=0; i<a; i++) {
    m+=l[i];
  }
  double s=0.00;
  s=m*1.00/(1.00*a);
  printf("%.2lf",s);
  cout<<" ";

  if (s-t>k-s) {
    printf("%.2lf",s-t);
    
  }
  else {
    printf("%.2lf",k-s);
    
  }
  
    return 0;
}