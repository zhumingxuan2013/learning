#include <iostream>
using namespace std;
int main() {
    for (int p=1;p*3<50 ;p++ ) {
        for (int b=1; p*3+b*2<50; b++) {
            int z=30-p-b;
            
            if (p*3+b*3+z==50 && p+b+z==30) {
                cout<<p<<" "<<b<<" "<<z<<endl;
            }
        }
    }
    return 0;
}