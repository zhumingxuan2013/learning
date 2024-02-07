#include <iostream>

using namespace std;
int main() {
	int a,b,c,d,e;
	for (int i=1; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (i==j){
				continue;
			}
			for (int k=0; k<10; k++) {
				if (k==i || k==j) {
					continue;
				}
				for (int t=0;t<10;t++  ) {
					if (t==i || t==j || t==k) {
						continue;
					}
					for (int x=0; x<10; x++) {
						if (x==i ||x==j||x==k||x==t) {
							continue;
						}
						if ((i*1000+j*100+k*10+t*1)*x==t*1000+k*100+j*10+i*1) {
							cout<<i<<" ";
							cout<<j<<" ";
							cout<<k<<" ";
							cout<<t<<" ";
							cout<<x<<" ";
							cout<<endl;
						}
					}
				}
			}
		}
	}
}