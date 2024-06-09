#include <iostream>

using namespace std;
void n(){
	string a;
	cin>>a;
	int x=0;
	char b;
	cin>>b;
	for (int i=0; i<a.size(); i++) {
		if (a[i]==b) {
			cout<<i+1<<" ";
			x=1;
		}
	}
	if (x==0) {
		cout<<"no";
	}

}
int main() {
	n();
}