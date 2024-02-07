#include <iostream>
using namespace std;

int main() {
	string a;
	cin>>a;
	a=" "+a;
	int p=0;
	int r=a.size();
	for (int i=0; i<r; i++) {
		if (a.substr(i,1)=="0") {
			p+=0;

		}
		if (a.substr(i,1)=="1") {
			p+=1;
		}		
		if (a.substr(i,1)=="2") {
			p+=2;
		
		}
		if (a.substr(i,1)=="3") {
			p+=3;
			
		}
		if (a.substr(i,1)=="4") {
			p+=4;
		}
		if (a.substr(i,1)=="5") {
			p+=5;
			
		}
		if (a.substr(i,1)=="6") {
			p+=6;
			
		}
		if (a.substr(i,1)=="7") {
			p+=7;
			
		}		
		if (a.substr(i,1)=="8") {
			p+=8;
			
		}
		if (a.substr(i,1)=="9") {
			p+=9;
	
		}
	}
	cout<<p;
	return 0;
}