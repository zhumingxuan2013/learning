#include <iostream>
#include <queue>
#include <math.h>
using namespace std;
int main() 
{   queue<int>q;
	for (int i=0; i<4; i++)
	{   int x;
		cin>>x;
		q.push(x);}
	int x;
	x=q.front();
	q.pop();
	int y;
	y=q.front();
	q.pop();
	x=x-q.front();
	q.pop();
	x=x*x;
	y=y-q.front();
	q.pop();
	y=y*y;
	cout<<sqrt(y+x);
	return 0;}