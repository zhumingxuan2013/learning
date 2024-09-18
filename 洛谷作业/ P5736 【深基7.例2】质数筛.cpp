#include <iostream>
#define f for(int i=0;i<n;i++)
	bool a(int i){
		if (i==1) {
			return false;
		}
		for (int j=2; j<i; j++) {
			if (i%j==0) {
				
				return false;
			}
		}
		return true;
	}
using namespace std;
int main() {
	int n;
	cin>>n;
	f {
		int x;
		cin>>x;
		if (a(x)) {
			cout<<x<<" ";
		}
	}
	return 0;
}