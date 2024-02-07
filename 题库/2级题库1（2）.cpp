#include <iostream>

using namespace std;
int main() {
	
	string a;
	
	cin >> a;

	for(int i = 0; i < a.size(); i++){
		if(char(a[i] + 5 > 'Z')){
			cout << char(a[i] + 5 - 26);
		}else{
			cout << char(a[i]+5);
		}
	}
	
}