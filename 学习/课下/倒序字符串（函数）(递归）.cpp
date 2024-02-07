#include <iostream>

using namespace std;

void x(){
	char c;
	cin>>c;
	if (c!='.') {
		x(); 
		cout<<c; 
	}else {
		cout<<".";
		return ;
	}
}
int main() {
	x();
}