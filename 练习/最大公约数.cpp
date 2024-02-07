#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int i=1;
	while (i%a!=0||i%b!=0) {
		i++;
		if (i%a==0&&i%b==0) {
			cout<<i;
			break;
		}
	}
}