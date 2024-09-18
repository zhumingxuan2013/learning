#include <iostream>
#include <algorithm>

using namespace std;
struct sb{
	int a,b;
};
bool cmp(sb c,sb d){
	return c.b<d.b;
}
int main() {
	int n,cnt=1;
	cin>>n;
	sb k[n];
	for (int i=0; i<n; i++) {
		cin>>k[i].a>>k[i].b;
	}
	sort(k, k+n,cmp);
	int t=0;
	int i=0;
	while(i<n) {
		i++;
		if(k[i].a>=k[t].b){
			cnt++;
			t=i;
		}
	}
	cout<<cnt;
	return 0;
}