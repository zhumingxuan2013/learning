#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main() {
	int a;
	cin>>a;
	int b[a],c[a],d[a],e[a];
	for (int j=0; j<a; j++) {
		cin>>b[j];
	}
	for (int j=0; j<a; j++) {
		cin>>c[j];
		
	}
	sort(b, b+a,cmp);
	sort(c, c+a,cmp);
	int ans=0,i=0,j=0;
	while (i<a&&j<a) {
		if (b[i]>c[j]) {
			ans++;
			i++;
			j++;
		}else {
			j++;
		}
	}
	cout<<ans<<" ";
	i=0;
	j=0;
	ans=0;
	while (i<a&&j<a) {
		if (c[i]>=b[j]) {
			ans++;
			i++;
			j++;
		}else {
			j++;
		}
	}
	cout<<a-ans;
	return 0;
}