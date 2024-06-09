#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head,*p,*r;
int main() {
	int x,y,ans=0;
	cin>>y>>x;
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
		ans++;
		if (ans==y) {
			cout<<p->data;
			return 0;
		}
		p=p->next;
	}
	if (ans+1!=y) {
		return 0;
	}
	cout<<p->data;
	return 0;
}