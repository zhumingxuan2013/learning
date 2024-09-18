#include <iostream>
using namespace std;
string a[16]={"rioi","rioI","riOi","riOI","rIoi","rIoI","rIOi","rIOI","Rioi","RioI","RiOi","RiOI","RIoi","RIoI","RIOi","RIOI"};
bool x(string x){
	for (int i=0; i<16; i++) {
		if (x.find(a[i])<x.size()) {
			return true;
		}
	}return 0;
}
int main() {
	string y,z;
	cin>>y>>z;
	if ((x(y)||x(z))&&!(x(y)&&x(z))) {
		cout<<(x(y)?y:z)<<" for sure!";
	}else if (x(y)&&x(z)) cout<<"Either is ok!";
	
	else 
		
		cout<<"Try again!";
}