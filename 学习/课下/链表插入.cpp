#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head,*p,*r;
void insert(node *head,int i,int x){
	node *p,*s;
	int j=0;
	p=head;
	while (j<i-1&&p->next!=NULL) {
		p=p->next;
		j++;
	}
	if (p->next==NULL) {
		cout<<"no this position!";
	}else{
		s=new node;
		s->data=x;
		s->next=p->next;
		p->next=s;
	}
}
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
	int z,i;
	cin>>i>>z;
	insert(head,i, z);
	p=head->next;
	while(p->next!=NULL){
        cout<<p->data<<"\t";
	    p=p->next;
	    
	}
	
	cout<<p->data<<endl;
	return 0;
}