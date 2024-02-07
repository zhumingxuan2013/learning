#include <iostream>

using namespace std;
int main() {
	string a;
	cin>>a;
	int b=a.size();
	char q;
	
	string w,e;
	
	for (int i=0; i<b; i++) {
		if (i==b-1) {
			e=a.substr(1,1);
			cout<<char(int(w[0]) + int(e[0]));
			break;
		}
		w=a.substr(i,1);
		e=a.substr(i+1,1);

		cout<<char(int(w[0]) + int(e[0]));
	}
	return 0;
}