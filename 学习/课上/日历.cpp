#include <iostream>

using namespace std;
int main() {
	cout<<"一\t二\t三\t四\t五\t六\t日"<<endl<<"\t\t\t\t";
	int a=5;
	for (;a<36; a++) {
		cout<<(a-4)<<"\t";
		if (a%7==0) {
			cout<<endl;
		}
	}
}