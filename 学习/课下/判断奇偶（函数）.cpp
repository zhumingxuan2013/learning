#include <iostream>

using namespace std;
bool a1(int a){
	if (a%2) {
		return false;
	}else {
		return true;
	}
}
bool a2(int a){
	if (!a) {
		return true;
	}else if(a==1) {
		return false;
	}else {
		return a2( a-2);
	}
}
bool a3(int a){
	if ((a&1)==0) {
		return true;
	}else {
		return false;
	}
}
void b(){
	int a;
	cin>>a;
	if (a1(a)&&a2(a)&&a3(a)) {
		cout<<"yes";
	}else {
		cout<<"no";
	}
}
int main() {
	 b();
}