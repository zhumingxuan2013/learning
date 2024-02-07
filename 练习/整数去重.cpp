#include <iostream>

using namespace std;
int main() {
  int a;
  cin>>a;
  int b[a],c[a];
  for (int i=0; i<a; i++) {
    cin>>b[i];
    c[i]=b[i];
  }
  for (int x=0; x<a; x++) {
    for (int y=0; y<a; y++) {
      if (c[y]==b[x]&&x!=y) {
        b[y]=0;
      }
    }
  }
  for (int j=0; j<a; j++) {
    if (b[j]==0) {
    }
    else {
      cout<<b[j]<<" ";
    }
  }
  return 0;
}