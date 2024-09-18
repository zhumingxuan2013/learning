#include <iostream>
#include <math.h>
using namespace std;
long long ago;
bool a(int num){
	string a="";
	int k=num;
	while (num>0) a+=num%8+'0',num /= 8;
	num=k;
	for (int i=0;i<a.size()/2;i++)if (a[i]!=a[a.size()-i-1]) return 0;
	return (num==int(sqrt(num))*int(sqrt(num)));
}
int main() {
	cin>>ago;
	for (int i=1;i<=ago; i++) if(a(i))cout<<i<<" ";
	return 0;
}