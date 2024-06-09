#include <iostream>
using namespace std;
//笔记
//1
/*struct node{
    int data;
	node *next;
};*/
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
        cout<<p->data<<"\t";
	    p=p->next;
	    
	}
	cout<<p->data<<endl;
	return 0;
}