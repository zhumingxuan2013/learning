#include <iostream>
using namespace std;
int ans[10];
int main() {
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		string y=std::to_string(i);
		for(int j=0;j<y.size();j++){
			ans[y[j]-'0']++;
		}
		
	}
	for (int i=0; i<10; i++) {
		cout<<ans[i]<< " ";
	}
	return 0;
}