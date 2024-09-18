#include <iostream>
#include <string.h>
using namespace std;
void x(long long num){
	string a;
	while (num>0) {
		string b;
		b=num%8+'0';
		a.replace(a.size(),0,b);
		num /= 8;
	}
	for (int i=a.size()-1; i>=0; i--) 
		cout<<a[i];
}
long long num;
int main() {
	cin >> num;
	x(num);
}