#include <iostream>

using namespace std;
char c[100]{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
void x(long long num,long long b){
	string a;
	while (num>0) {
		string d;
		d=c[num%b];
		a.replace(a.size(),0,d);
		num /= b;
	}
	
	for (int i=a.size()-1; i>=0; i--) 
		cout<<a[i];
}
long long num,b;
int main() {
	
	cin >> num>>b;
	x(num,b);
}