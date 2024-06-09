#include <iostream>

using namespace std;
string FOODWASTS[3]{"leaves","watermelon peel","leftovres"},RECYCLABLE[3]{"paper box","plastic bottle","clothes"},HAZARDOUS[3]{"rechargeable battery","abandoned medicine","disinfectant"},RESIDUALWASTE[3]{"mask","battery","plastic bag"},name[4]{"FOOD WASTS","RECYCLABLE","HAZARDOUS","RESIDUAL WASTE"};
int n[4];
bool x(string a){
	for (int i=0; i<3; i++) {
		if (a==FOODWASTS[i]) {
			return true;
		}
	}
	return false;
}
bool y(string a){
	for (int i=0; i<3; i++) {
		if (a==RECYCLABLE[i]) {
			return true;
		}
	}
	return false;
}
bool z(string a){
	for (int i=0; i<3; i++) {
		if (a==HAZARDOUS[i]) {
			return true;
		}
	}
	return false;
}
int main() {
	
	int a;
	cin>>a;

	string b;
	for (int i=0; i<a; i++) {
		cin>>b;
		if (x(b)) {
			n[0]++;
		}else if (y(b)) {
			n[1]++;
		}else if (z(b)) {
			n[2]++;
		}else {
			n[3]++;
		}
	}
	int ans1=0,ans2=0;
	for (int i=0; i<4; i++) {
		if (n[0]>ans1) {
			ans1=n[i];
			ans2=i;
		}
	}
	cout<<ans1<<"\n"<<name[ans2];
	return 0;
}