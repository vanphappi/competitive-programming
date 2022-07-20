#include <bits/stdc++.h>
using namespace std;

struct node{
	int data; // dữ liệu chứa trong 1 cái node
	struct node *pNext; // con trỏ dùng để liên kết giữa các cái node với nhau
};

typedef struct node NODE; // thay thế struct node thành NODE

struct list_t{
	NODE *pHead; // node quản lí đầu danh sách
	NODE *pTail; // node quản lí cuối danh sách
};

typedef struct list_t LIST; // thay thế struct list_t thành LIST

// khởi tao cấu trúc danh sách liên kết đơn các số nguyên

void init(LIST &l){
	// cho 2 node trỏ đến null - vì danh sách liên kết đơn chưa có phần tử
	l.pHead=NULL;
	l.pTail=NULL;
}	

// hàm khởi tạo một cái node

NODE *init_NODE(int x){
	NODE *p= new NODE; // cấp phát vùng nhớ cho NODE p
	if(p==NULL){
		cout<<"Khong du bo nho de cap phat"<<endl;
		return NULL;
	}
	return p; // trả về node p vừa khởi tạo
	p->data = x; // truyền giá trị x vào cho data
	p->pNext=NULL; // dầu tiên khai báo node thì node chưa có liên kết đến node nào hết ==> con trỏ trỏ tới null
}

// hàm thêm node vào đâu danh sách liên kết

void initToHeadList(LIST &l, NODE *p){
	// danh sách rỗng
	if(l.pHead == NULL){
		l.pHead=l.pTail=p; // node đầu cũng chính là node cuối và là p
	}
	else{
		p->pNext=l.pHead; // cho con trỏ của node cần thêm là node p liên kết đến node đầu - pHead
		l.pHead=p; // cập nhật lại pHead chính là node p
	}
	
}

// hàm thêm node vào cuối danh sách liên kết

void initToTailList(LIST &l, NODE *p){
	// danh sách rỗng
	if(l.pHead == NULL){
		l.pHead=l.pTail=p; // node đầu cũng chính là node cuối và là p
	}
	else{
		l.pTail->pNext=p; // cho con trỏ của pTail liên kết với node p
		l.pTail=p; // cặp nhật lại p là node pTail
	}
}

// hàm xuất danh sách liên kết đơn

void outputList(LIST l){
	NODE *k=l.pHead;
	while (k != NULL){
		cout<<k->data<<" ";
		k=k->pNext;
	}
	/*
	for(NODE *k=l.pHead;k != NULL; k=k->pNext){
		cout<<k->data<<" ";
	}*/
}

int main(){
	LIST l;
	init(l); // khởi tạo danh sách liên kết đơn
	int n;
	cout<<"Nhap so luong node can them:";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		int x;
		cout<<"Nhap gia tri so nguyen:";
		cin>>x;
		cout<<endl;
		NODE *p= init_NODE(x); // khởi tạo 1 cái node số nguyên
		initToHeadList(l,p); // thêm node p vào đầu danh sách liên kết đơn
	}
	cout<<" Danh sach lien ket don:"<<endl;
	outputList(l);
	return 0;
}
