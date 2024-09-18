#include <iostream>
using namespace std;
int main() {
	char a,wangruiyi;
	int b=0,sum=1,flag=1,x=0,r=0,kun=0;
	while (cin>>a) {
		if (a=='=') {
			b+=sum*flag*x;
			x=r=0;
			flag=1;
			sum=-1;
		}
		else if (a=='-') {
			b+=sum*flag*x;
			x=r=0;
			flag=-1;
		}
		else if (a=='+') {
			b+=sum*flag*x;
			x=r=0;
			flag=1;		
		}
		
		else if(a>='a'&&a<='z'){
			if(r){
				kun+=sum*flag*x;x=0;
			}
			else kun+=sum*flag;
			wangruiyi=a;r=0;
		}
		else if(a>='0'&&a<='9'){
			x=x*10+a-48;r=1;
		}
		
	}
	b+=sum*flag*x;
	printf("%c=%.3f",wangruiyi,(-(1.00*b)/(1.00*kun))==-0.00?0.00:(-(1.00*b)/(1.00*kun)));
	return 0;
}