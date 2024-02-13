#include <iostream>

using namespace std;
bool zs(int c){
	if (c==1||c==0)
		return false;
	for (int d=2; d<c; d++) {
		if (c%d==0)
			return false;
	}
	return true;
}
int main() {
	for (int i=1000; i<10000; i++) {
		if (zs(i)&&zs(i/1000+i/100%10*10+i/10%10*100+i%10*1000)) {
			cout<<i<<"\n";
			
		}
	}
}