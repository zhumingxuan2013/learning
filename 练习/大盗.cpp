#include <iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		int v[1000];
		for(int i=0;i<N;i++){
			cin>>v[i];
		}
		int d[1000];
		for(int i=0;i<N;i++){
			if(i==0||i==1){
				d[i]=v[i];
			}else{
				int D=0;
				for(int j=0;j<i-1;j++){
					D=max(D,d[j]);
				}
				d[i]=D+v[i];
			}
			
		}
		int m=0;
		for(int i=0;i<N;i++){
			m=max(m,d[i]);
		}
		cout<<endl<< m;
	}
}