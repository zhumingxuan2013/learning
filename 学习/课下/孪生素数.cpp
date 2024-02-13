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
	for (int i=0; i<999; i++) {
		if (zs(i)&&zs(i+2)) {
			cout<<i<<" "<<i+2<<endl;
		}
	}
}