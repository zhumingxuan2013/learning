#include<iostream>
#define int long long
using namespace std;
const int kun = 1e9 + 7;
const int Maxkun = 1000005;
int d[Maxkun],f[Maxkun],ikun[Maxkun];

int p(int a,int b){int ans = 1;while(b){if(b & 1)ans = ans * a % kun;b >>= 1;a = a * a % kun;}return ans;}
void chushihua(){d[0] = 1,d[2] = 1;for(int i = 3;i <= 1000000;++ i)d[i] = (i - 1) * (d[i - 1] + d[i - 2]) % kun;f[0] = 1,f[1] = 1;for(int i = 2;i <= 1000000;++ i)f[i] = f[i - 1] * i % kun;ikun[0] = p(f[0],kun - 2);for(int i = 1;i <= 1000000;++ i)ikun[i] = p(f[i],kun - 2) % kun;}
signed main(){
	chushihua();
	int t;
	cin >> t;
	while(t--){
		int n,m;
		scanf("%lld%lld",&n,&m);
		printf("%lld\n",(f[n] * ikun[m] % kun * ikun[n-m] % kun * d[n-m]) % kun);
	}
	return 0;
}