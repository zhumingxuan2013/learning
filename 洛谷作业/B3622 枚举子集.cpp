#include <iostream>
using namespace std;
int TwoToThePowerOfN(int n){
	if (n==1) {
		return 2;
	}
	return 2*TwoToThePowerOfN(n-1);
}
char c[17]{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int n;
void x(long long num,long long b){
	string a;
	while (num>0) {
		string d;
		d=c[num%b];
		a.replace(a.size(),0,d);
		num /= b;
	}
	for (int i=a.size(); i<n; i++) {
		cout<<"N";
	}
	for (int i=a.size()-1; i>=0; i--) 
	{
		if(a[i]=='1'){
			cout<<"Y";
		}else {
			cout<<"N";
		}
	}
	cout<<endl;
}
int main() {
	cin>>n;
	int a=TwoToThePowerOfN(n);
	for (int i=0; i<a; i++) {
		x(i,2);
	}
	
	return 0;
}