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
		return ;
	}else{
		s=p->next;
		p->next=(p->next)->next;
		free(s);
	}
}

int main() {
	int num,m=1;
	cin >> num;

	head=new node;
	r=head;
	for(int i = 0; i < num ; i ++){
		
		int x;
		cin>>x;
		p=new node;
		p->data=x;
		p->next=NULL;
		r->next=p;
		r=p;
		
	}
	p=head->next;
	
	int ans;
	cin>>ans;
	while(p->next!=NULL){
		if (p->data==ans) {
			delete1(head,m);
		}else {
			m++;
		}
		p=p->next;
		
	}
	if (p->data==ans) {
		delete1(head,m);
	}
	p=head->next;
	
	while(p->next!=NULL){
        cout<<p->data<<"\t";
	    p=p->next;
	    
	}
	cout<<p->data<<endl;
	return 0;
}