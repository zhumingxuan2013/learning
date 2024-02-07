#include <iostream>
using namespace std;
int main() {
	int a,b,c=0,o;
	cin>>a>>b;
	for(int i=1; i < 10000 ;i++){
		if(i%43 == 0 && i%47 == 0)
		{
			c = i;
			break;
		}
	}
	for (int p=36995-(36999%c); p>36000; p=p-c) {
		cout<<p<<endl;
	}
	return 0;
}