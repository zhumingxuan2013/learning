#include <iostream>

using namespace std;
int main() {
  long long a,b,c;cin>>a>>b>>c;cout<<((a+((b-a)*(c-1)+a))*c)/2;
    return 0;
}