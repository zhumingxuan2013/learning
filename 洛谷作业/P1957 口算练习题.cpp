#include <iostream>
#include <cstring> 
#include <cstdio> 
using namespace std;
int main() {
	char z,c[200],s[1000];
	int n,a,b;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>c;
		if(c[0]>='a'&&c[0]<='z'){
			z=c[0];			
			cin>>a>>b;
		}else{
			sscanf(c,"%d",&a);
			cin>>b;
		}
		memset(s, 0, sizeof(i));
		if (z=='a') {
			sprintf(s,"%d+%d=%d",a,b,a+b);
		}		if (z=='b') {
			sprintf(s,"%d-%d=%d",a,b,a-b);
		}		if (z=='c') {
			sprintf(s,"%d*%d=%d",a,b,a*b);
		}
		cout<<s<<endl<<strlen(s)<<endl;
	}
	return 0;
}