#include <iostream>
using namespace std;
int main() {
    int a, z=0;
    int y=0;
    cin>>a;
    for (int p=1;p*5<a ;p++ ) {
        for (int b=1; p*5+b*3<a; b++) {
            z=a-p-b;
            z++;
            
            if (p*5+b*3+z/3==a) {
                cout<<p<<" "<<b<<" "<<z-1<<endl;
        y++;
            }
        }
    }
    
    cout<<y;
    
    return 0;
    
}
