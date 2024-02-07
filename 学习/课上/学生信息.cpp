#include <iostream>

using namespace std;
struct student{
	string name[3];
	int StudentID[3];
	int mathematics[3];
	int Chinese[3];
	int Totalscore[3];	
}student1;
int main(){
	int a;
	struct student;
	for (int i=0; i<3; i++) {
		cin>>student1.name[i];
		cin>>student1.StudentID[i];
		cin>>student1.mathematics[i];
		cin>>student1.Chinese[i];
		student1.Totalscore[i]=student1.mathematics[i]+student1.Chinese[i];
	}
	a=0;
	for (int i=0; i<3; i++) {
		cout<<student1.name[i]<<" ";
		cout<<student1.StudentID[i]<<" ";
		cout<<student1.mathematics[i]<<" ";
		cout<<student1.Chinese[i]<<" ";
		cout<<student1.Totalscore[i]<<" ";
		if (student1.Totalscore[a]<=student1.Totalscore[i]) {
			a=i;
		}else{
			student1.Totalscore[i]=0;
		}
	}
	cout<<endl;
	for (int i=0; i<3; i++) {
		if (student1.Totalscore[i]!=0) {
			cout<<student1.name[i]<<" ";
			cout<<student1.StudentID[i]<<" ";
			cout<<student1.mathematics[i]<<" ";
			cout<<student1.Chinese[i]<<" ";
			cout<<student1.Totalscore[i]<<" ";
			cout<<endl;
		}
	}
}