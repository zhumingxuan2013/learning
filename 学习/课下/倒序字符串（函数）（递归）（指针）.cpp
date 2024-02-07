#include <iostream>
using namespace std;
void x(){
	char c;
	cin>>c;
	char *c1=&c;
	if (c!='\0') {
		x(); 
		cout<<*c1; 
	}else {
		return ;
	}
}
int main() {
	x();
}