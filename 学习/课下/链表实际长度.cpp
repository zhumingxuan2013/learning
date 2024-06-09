#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head,*p,*r;

int main() {
	int x,n=0;
	cin>>x;
	head=new node;
	r=head;
	while(x!=-1){
	    p=new node;
	    p->data=x;
	    p->next=NULL;
	    r->next=p;
	    r=p;
	    cin>>x;
		n++;
	}
	p=head->next;
	cout<<n;
	return 0;
}