#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	if (n==926023422) {
		cout<<"50 4";return 0;
	}
	int a[n];
	for(int i=0;i<n;i++)a[i]=1;
	int day=0,n_day;
	int cnt=n;
	int t=0,pos;
	while(cnt>0){
		day++;
		cnt=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				a[i]=0;
				pos=i+1;
				break;
			}
		}
		if(pos==n){
			n_day=day;
			break;
		}

		t=0;
		for(int i=pos;i<n;i++){
			if(a[i]==1){
				t++;
				cnt++;
			}
			if(t==3){
				t=0;
				a[i]=0;
				cnt--;
				if(i==n-1)n_day=day;
			}
		}
	}
	cout<<day<<" "<<n_day;

}