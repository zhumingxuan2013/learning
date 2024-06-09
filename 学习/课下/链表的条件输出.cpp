#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head,*p,*r;
int main() {
	int x;
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
	}
	p=head->next;
	while(p->next!=NULL){
		if ((p->data)%3==0) {
			cout<<p->data<<"\t";
		}
		p=p->next;
	}
	if ((p->data)%3==0) {
		cout<<p->data<<endl;
	}
	return 0;
}