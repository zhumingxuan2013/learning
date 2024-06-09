#include <iostream>
using namespace std;
int main() {
	int n,head=0,tail=1;
	cin>>n;
	int q[n];
	for (int i=0; i<n; i++) {
		int x;
		cin>>x;
		q[tail]=x;
		tail++;
	}
	while (head<tail-1) {
		head++;
		cout<<q[head]<<" ";

	}
	return 0;
}