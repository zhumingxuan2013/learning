#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	bool c[a+1][b+1];
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			c[i][j]=0;
		}
	}
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			cin>>c[i][j];
		}
}
	int d,e;
	cin>>d>>e;
	bool f[d+1][e+1];
	for (int i=1; i<=d; i++) {
		for (int j=1; j<=e; j++) {
			f[i][j]=0;
		}
	}
	for (int i=1; i<=d; i++) {
		for (int j=1; j<=e; j++) {
			cin>>f[i][j];
		}
	}

	
	int ans=0;
	for(int dx = -a;dx <= a;dx++){
		for(int dy = -b;dy <= b;dy++){
			
			int ans2=0;
			bool flag=true;
			for (int i=1; i<=d;i++) {
				for (int j=1; j<=e; j++) {
					int nx = i + dx;
					int ny = j + dy;
					if(nx > 0 && nx <= a && ny > 0 && ny <= b){
						if(c[nx][ny] == f[i][j])
							ans2++;
						else
							flag = false;
					}
				}
		
			}
			ans=max(ans,ans2*flag);

		}
	}
	cout<<ans;
}