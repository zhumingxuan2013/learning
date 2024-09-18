#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
string b[100001][3];
int a,cnt1=0;
int p[100001];
void h(int f){
	if (b[f][2]=="-1") {
		b[f][0]=b[f][1]=b[f][2]="";

		return;
	}
	
	for (int i=0; i<a; i++) {
		if (b[f][2]==b[i][0]) {
			h(i);
			break;
		}
	}
	
	b[f][0]=b[f][1]=b[f][2]="";
	return;
}
void g(int f,string step){
	if (b[f][2]==step) {
		b[f][0]=b[f][1]=b[f][2]="";
		
		return;
	}
	
	for (int i=0; i<a; i++) {
		if (b[f][2]==b[i][0]) {
			g(i,step);
			break;
		}
	}
	
	b[f][0]=b[f][1]=b[f][2]="";
	return;
}
int q(int f,string step){
	if (step==b[f][0]) {
		return stoi(b[f][1]);
	}
	int ans;
	for (int i=0; i<a; i++) {
		if (b[f][2]==b[i][0]) {
			ans=i;
			break;
		}
	}
	
	return q(ans,step)+stoi(b[f][1]);
}

int main() {
	cin>>a;
	for (int i=0; i<a; i++) {
		for (int j=0; j<3; j++) {
			cin>>b[i][j];
		}
	}
	for (int i=0; i<a; i++) {
		int f=0;
		for (int j=0; j<a; j++) {
			if (b[i][0]==b[j][2]) {
				f=1;
				break;
			}
		}
		if (f==0) {
			
			cnt1++;
			p[cnt1]=stoi(b[i][0]);
			h(i);
		}
	}
	sort(p, p+cnt1+1);
	cout<<cnt1<<"\n";
	if (cnt1==0) {
		cout<<-1;
	}
	else {
		for (int i=1; i<=cnt1; i++) {
			string k=to_string(p[i]);
			for (int j=0; j<5-k.size(); j++) {
				cout<<0;
			}
			cout<<k<<" ";
		}
	}
	cout<<"\n";
	int cnt=0,maxn=0;
	for (int i=0; i<a; i++) {
		if (b[i][0]!="") {
			cnt++;
			maxn=max(stoi(b[i][1])+q(i,b[i][0]),maxn);
			g(i,b[i][0]);
		}
	}
	cout<<cnt<<"\n"<<maxn;
	return 0;
}