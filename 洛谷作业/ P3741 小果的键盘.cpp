#include <iostream>
using namespace std;
int a[10086];
int main() {
	
	int n;
	cin >> n;
	char str[n+1];
	
	cin >> str;
	
	int cnt=0;
	for(int i = 0; i < n - 1; i ++){
		if(str[i] == 'V' && str[i + 1] == 'K') {cnt ++;a[i]=a[i+1]=1;}
	}
	
	for(int i = 0; i < n - 1 ; i ++){
		if((str[i] == 'V' && str[i + 1] != 'K'&&!a[i+1])||(str[i] != 'V' && str[i + 1] == 'K'&&!a[i])) {
			cnt += 1;
			break;
		}
	}
	
	cout << cnt;
	
	return 0;
}