#include <iostream>
using namespace std;
int a[290];
int main() {
    int n;
    cin>>n;
    int b=n;
    
    while(n--){
        int x;
        cin>>x;
        a[x]++;
    }n=b;
    for (int i=0; i<290; i++) {
        if (a[i]>n/2) {
            cout<<i;return 0;
        }
    }cout<<"No";
    return 0;
}