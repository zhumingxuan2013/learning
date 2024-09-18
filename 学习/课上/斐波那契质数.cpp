#include <iostream>
using namespace std;
bool a(int i){
    if (i==1) {
        return false;
    }
    for (int j=2; j<i; j++) {
        if (i%j==0) {
            
            return false;
        }
    }
    return true;
}
int f(int j){
    if (j==1||j==2) {
        return 1;
    }
    return f(j-2)+f(j-1);
}
int main() {
	long long n,m,k=0;
    cin>>n;
    for (int i=3; i<=n; i++) {
        if (a(f(i))) {
            cout<<f(i)<<" ";
        }
    }

    return 0;
}