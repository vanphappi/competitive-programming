#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;

//Cap phat dong mot node node moi voi du lieu la so nguyen x
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;	
}

//Kiem tra rong
bool empty(node a){
	return a==NULL;
}

int Size(node a){
	int cnt=0;
	while(a != NULL){
		cnt++;
		a=a->next; // Gan dia chi node tiep theo cho node hien tai
		// cho node hien taii nhay sang node tiep theo
	}
	return cnt;
}

// them 1 phan tu vao dau danh sach lien ket
void insertFirst(node &a,int x){
	node tmp=makeNode(x);
	if(a == NULL){
		a=tmp;
	}
	else{
		tmp->next= a;
		a=tmp;
	}
}

// them 1 phan tu vao cuoi danh sach
void insertLast(node &a, int x){
	node tmp=makeNode(x);
	if(a == NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next != NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}

// Them 1 phan tu vao giua
void insertMiddle(node &a, int x, int pos){
	int n=Size(a);
	// vi tri chen khong hop le
	if(pos<=0 || pos> n+1)
		return;
	if(pos==1){
		insertFirst(a,x);
		return;
	}
	else if(pos==n+1){
		insertLast(a,x);
		return;
	}
	node p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	node tmp=makeNode(x);
	tmp->next=p->next;
	p->next=tmp;
}

// xoa phan tu dau
void deleteFirst(node &a){
	if(a==NULL)
		return;
	a=a->next;
}

// xoa phan tu cuoi
void deleteLast(node &a){
	if(a==NULL){
		return;
	}
	node t=NULL;
	node s=a;
	while(s->next != NULL){
		t=s;
		s=s->next;
	}
	if(t==NULL){
		a=NULL;
	}
	else{
		t->next=NULL;
	}
}

// Xoa o giua
void deleteMiddle(node &a,int pos){
	if(pos<=0 || pos>Size(a)){
		return;
	}
	node t=NULL;
	node s=a;
	for(int i=0;i<pos;i++){
		t=s;
		s=s->next;
	}
	if(t==NULL){
		a=a->next;
	}
	else{
		t->next=s->next;
	}

}

void in(node a){
	while(a !=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
}

int main(){
	node head=NULL;
	insertFirst(head,6);
	insertFirst(head,7);
	insertFirst(head,8);
	insertFirst(head,9);
	insertLast(head,10);
	insertMiddle(head,11,2);
	deleteLast(head);
	in(head);
	return 0;
}
