#include <iostream>

using namespace std;
int a(int n){
	int ans=0;
	for (int i=1; i<n; i++) {
		if (n%i==0) {
			ans+=i;
		}
	}
	if (ans==n) {
		cout<<n<<"\t";
	}
	return 0;
}
int b(){
	for (int i=3; i<100; i++) {
		a(i);
	}
	return 0;
}
int main() {
	b();
}