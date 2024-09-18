#include <iostream>
using namespace std;
bool p(int a,int b) {
 if (a==0) {
  if (b==1||b==4) {
   return false;
  } else {
   return true;
  }
 }
 if (a==1) {
  if (b==2||b==4) {
   return false;
  } else {
   return true;
  }
 }
 if (a==2) {
  if (b==0||b==3) {
   return false;
  } else {
   return true;
  }
 }
 if (a==3) {
  if (b==0||b==1) {
   return false;
  } else {
   return true;
  }
 }
 if (a==4) {
  if (b==2||b==3) {
   return false;
  } else {
   return true;
  }
 }
 return true;
}

int main() {
 int n,na,nb,A=0,B=0;
 cin>>n>>na>>nb;
 int a[na],b[nb];
 for (int i=0; i<na; i++) {
  cin>>a[i];
 }
 for (int i=0; i<nb; i++) {
  cin>>b[i];
 }
 for (int i=0; i<n; i++) {
  if (a[i%na]!=b[i%nb]) {
   if(p(a[i%na],b[i%nb]))A++; 
      else B++;
  }
 }
 cout<<A<<" "<<B;
 return 0;
}