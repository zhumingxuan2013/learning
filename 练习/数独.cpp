#include <iostream>
using namespace std;
bool check(int a[9][9]){
	for (int i=0; i<9; i++) {
		int m[9]={};
		int g[9]={};
		for (int p=0; p<9; p++) {
			if (m[a[i][p]-1]==0) {
				m[a[i][p]-1]=1;
			}
			else {
				return false;
			}
			if (g[a[p][i]-1]==0) {
				g[a[p][i]-1]=1;
			}
			else {
				return false;
			}
			if (i%3==0&&p%3==0) {
				for (int l=i; l<i+3; l++) {
					int s[9]={};
					for (int o=p; o<p+3;o++) {
						if (s[a[l][o]-1]==0) {
							s[a[l][o]-1]=1;
						}
						else  {
							return false;
						}
					}
				}
			}
		}
	}
	return true;
}
bool check2(int a[6][6]){
	for (int i=0; i<6; i++) {
		int m[6]={};
		int g[6]={};
		for (int p=0; p<6; p++) {
			if (m[a[i][p]-1]==0) {
				m[a[i][p]-1]=1;
			}
			else {
				return false;
			}
			if (g[a[p][i]-1]==0) {
				g[a[p][i]-1]=1;
			}
			else {
				return false;
			}
			if (i%3==0&&p%2==0) {
				for (int l=i; l<i+3; l++) {
					int s[6]={};
					for (int o=p; o<p+2;o++) {
						if (s[a[l][o]-1]==0) {
							s[a[l][o]-1]=1;
						}
						else  {
							return false;
						}
					}
				}
			}
		}
	}
	return true;
}

int main(){
	string o="6宫还是9宫";
	cout<<o;
	string u;
	cin>>u;
	if (u=="6宫") {
		int a[6][6];
		for (int i=0; i<6; i++) {
			for (int p=0; p<6; p++) {
				cin>>a[i][p];
			}
		}
		if(check2(a)) {
			cout<<"yes";
		}
		else {
			cout<<"no";
		}

	}else if(u=="9宫") {
		int a[9][9];
		for (int i=0; i<9; i++) {
			for (int p=0; p<9; p++) {
				cin>>a[i][p];
			}
		}
		if(check(a)) {
			cout<<"yes";
		}
		else{
			cout<<"no";
		}

	}
	return 0;
}