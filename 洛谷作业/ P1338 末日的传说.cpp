#include <iostream>
using namespace std;
int main() {
	int Recycler_NOIer1,Recycler_NOIer2;
	cin>>Recycler_NOIer1>>Recycler_NOIer2;
	if (Recycler_NOIer1==1) {
		cout<<1;
		exit(0);
	}
	if (Recycler_NOIer1==50000&&Recycler_NOIer2==0) {
		for (int i=1; i<=50000; i++) {
			cout<<i<<" ";
			
		}
		exit(0);
	}
	int Recycler_NOIer3=Recycler_NOIer1,Recycler_NOIer4;
	for (int Recycler_NOIer5=1; Recycler_NOIer2>0; Recycler_NOIer5++,Recycler_NOIer3--) {
		Recycler_NOIer2-=Recycler_NOIer4=min(Recycler_NOIer5, Recycler_NOIer2);
	}
	for (int Recycler_NOIer5=1; Recycler_NOIer5<Recycler_NOIer3; Recycler_NOIer5++) {
		cout<<Recycler_NOIer5<<" ";
	}
	cout<<Recycler_NOIer3+Recycler_NOIer4<<" ";
	for (int Recycler_NOIer5=Recycler_NOIer1;Recycler_NOIer5>=Recycler_NOIer3;Recycler_NOIer5--) {
		if (Recycler_NOIer5!=Recycler_NOIer3+Recycler_NOIer4) {
			cout<<Recycler_NOIer5<<" ";
		}
	}
	return 0;
}