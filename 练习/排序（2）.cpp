#include <iostream>

using namespace std;
int main() {
  int a,c;
  cin>>a;
  int b[a];
  for (int i=0; i<a; i++) {
    cin>>b[i];
  }
  for (int x=0; x<a-1; x++) {
    for (int y=0; y<a-1-x; y++) {
      if(b[y] > b[y+1])
        swap(b[y],b[y+1]);
    }
  }
  for (int i=0; i<a; i++) {
    cout<<b[i]<<" ";
  }
    return 0;
}