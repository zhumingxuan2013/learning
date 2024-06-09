#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head,*p,*r;
void delete1(node *head,int i){
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
		s=p->next;
		p->next=(p->next)->next;
		free(s);
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
	int i;
	cin>>i;
	delete1(head,i);
	p=head->next;
	while(p->next!=NULL){
        cout<<p->data<<"\t";
	    p=p->next;
	    
	}
	
	cout<<p->data<<endl;
	return 0;
}