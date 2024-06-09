#include <iostream>

using namespace std;
struct node{
	string a,b,c,d,e,f;
	
	node *next;
};
node *head,*p,*r;

int main() {
	int ans=0;
	head=new node;
	r=head;
	while (1) {
		string x;
		cin>>x;
		p=new node;
		p->a=x;
		if (x=="end") {
			break;
		}
		cin>>x;
		p->b=x;
		cin>>x;
		p->c=x;
		cin>>x;
		p->d=x;
		cin>>x;
		p->e=x;
		cin>>x;
		p->f=x;
		p->next=NULL;
		r->next=p;
		r=p;
		ans++;
	}
	p=head->next;
	int c=ans;
	for (int i=1;i<=c;i++) {

	for (int i=1;i<=ans;i++) {

		if (i==ans) {
			cout<<p->a<<" ";
			cout<<p->b<<" ";
			cout<<p->c<<" ";
			cout<<p->d<<" ";
			cout<<p->e<<" ";
			cout<<p->f<<" ";
			p=head->next;
			i=1;
			ans--;
			cout<<endl;
			break;
		}
		p=p->next;
		
	}}
		
		
	

}