#include <iostream>
using namespace std;
int n(int m){
	if (m==1||m==2)return 1;
	return n(m-1)+n(m-2);
}
int main() {
	int m;
	cin>>m;
	cout<<n(m);
	return 0;
}