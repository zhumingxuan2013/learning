#include <iostream>
using namespace std;

bool huiwen(char c[]){
	int i = strlen(c);
	int d=1;
	for (int p=0; p<i; p++) {
		char o = c[i-p-1];
		if (c[p]!=o) {
			d = 0;
			break;
		}
	}
	if (d) {
		return true;
	}
	return false;
}
int main() {
	int a;
	cin >> a;
	char b[101];
	while (a--) {
		cin>>b;
		if (huiwen(b)) {
			cout<<"yes";
			break;
		}
		else {
			cout<<"no";
			break;
		}
	}
	return 0;
}