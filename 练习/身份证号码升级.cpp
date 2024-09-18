#include <iostream>
using namespace std;
int main() {
	int y[20]{7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

	char a[11]{'1','0','x','9','8','7','6','5','4','3','2'};
	int sum=0;
	for (int i=1;i<18;i++) {
		char p;
		cin>>p;
		int x=p-'0';
		if (i==7) {
			cout<<"19";
			i+=2;
		}
		
			sum+=x*y[i-1];

		

		cout<<x;
	}
	cout<<a[sum%11];
	return 0;
}