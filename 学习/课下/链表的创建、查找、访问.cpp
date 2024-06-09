#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head,*p,*r;
void n(){
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
}
void m(){
	while(p->next!=NULL){
		cout<<p->data<<"\t";
		p=p->next;
		
	}
	cout<<p->data<<endl;
}
int main() {
	n();
	m();
	return 0;
}