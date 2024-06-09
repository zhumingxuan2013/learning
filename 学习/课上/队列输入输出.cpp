#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n;
	cin>>n;
	queue<int>q;
	for (int i=0; i<n; i++) {
		int x;
		cin>>x;
		q.push(x);
	}
	for (int i=0; i<n; i++) {
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}