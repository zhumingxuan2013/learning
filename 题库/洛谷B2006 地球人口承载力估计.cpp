#include <iostream>
#include <cmath>

using namespace std;
int main() {
double a, x, b,y;	
cin>>a>>x>>b>>y;
printf("%.2lf",1.0*(a*x-b*y)/(a-b));
}