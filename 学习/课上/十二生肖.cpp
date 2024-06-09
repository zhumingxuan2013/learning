#include <iostream>
using namespace std;
int main() {
	string a[12]{"rooster","dog","pig","rat","ox","tiger","rabbit","dragon","snack","horse","sheep","monkey"};
	int n;
	cin>>n;
	cout<<a[(n%12)-1];
	return 0;
}