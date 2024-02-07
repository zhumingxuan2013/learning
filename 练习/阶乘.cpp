#include <iostream>

using namespace std;
int main() {
  unsigned long long a,c=1;
  cin>>a;
  unsigned long long b[a];
  for (int i=0; i<a; i++) {
    if (i>=1) {
        b[i]=i+1;
      c*=b[i];
    }

  }
  cout<<c;
  return 0;
}