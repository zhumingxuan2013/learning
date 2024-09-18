#include <iostream>
#include <iomanip>

using namespace std;
int n,m;
int a[23],book[23];
void d(int s){
	
	if (s==m+1) {
		for (int i=1; i<s; i++) {
			cout << setw(3) << a[i];
		}
		cout<<endl;
		return ;
	}
	for(int i=a[s-1]+1;i<=n;i++){
		a[s]=i;
		d(s+1);
	}
	return ;
}
int main() {
	cin>>n>>m;
	d(1);
	
}