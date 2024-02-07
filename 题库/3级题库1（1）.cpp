#include <iostream>
using namespace std;
bool c(int d,int e[d]){
	int z=0;
	for (int f=0; f<d; f++) {
		for (int g=0; g<d; g++) {
			if (g!=f) {
				for (int h=0; h<d;h++) {
					if (e[g]+e[h]==e[f]&&f!=h&&f!=g&&e[g]!=e[h]) {
						z++;
						cout << e[f] << " = " << e[g] << " + " << e[h] << endl;
					}
				}
			}
		}
		
	}
	if (z!=0) {
		cout<<z/2;
		return true;
	}else {
		cout<<"404";
	}
	return false;
}
int main() {
	int a;
	cin>>a;
	int b[a];
	for (int i=0; i<a; i++) {
		cin>>b[i];
	}
	c(a,b);
	return 0;
}