#include <iostream>

using namespace std;
int main() {
	int j=1;
	for (int i=0; i<j; i++) {
		j++;
		int num;
		cin >> num;
		int p=num;
		int ans=0;
		if (num==0) {
			break;
		}
		while (num) {
			ans+=num%2;
			num /= 2;
		}
		int n=p+2;
		for (int o=p+1;o<n; o++) {
			n++;
			int y=0;
			int u=o;
			while (u) {
				y+=  u % 2;
				u /= 2;
			}
			if (y==ans) {
				cout<<o<<" ";
				break;
			}
		}
	}
	
	return 0;
}