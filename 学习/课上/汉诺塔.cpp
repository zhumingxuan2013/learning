#include <iostream>

using namespace std;
int k=0;

void move(int n,char a,char b,char c){
	if (!n) {
		return ;
	}
	move(n-1,a,c,b);
	k++;
	cout<<k<<" from "<<a<<" to "<<b<<endl;
	move(n-1,c,b,a);
}
int main() {
	int n;
	cin>>n;
	char a='a',b='b',c='c';
	move(n, a, b,c);
}