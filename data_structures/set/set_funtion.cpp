#include <bits/stdc++.h>
using namespace std;

// O(logn)
// insert
// find
// count
// erase

int main(){
	// Khai báo 1 set
	set<int> s;
	// Thêm dữ liệu vào set
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(500);
	s.insert(400);
	s.insert(100);
	s.insert(200);
	cout<<s.size()<<endl; // KQ=3 - Bởi vì set không lưu các phần tử giống nhau

	// Tìm kiếm phần tử trong set - O(logn)
	if(s.count(100) !=0 ){
		cout<<"Found !"<<endl;
	}
	else{
		cout<<"Not found !"<<endl;
	}

	if(s.find(900) == s.end()){
		cout<<"Found !"<<endl;
	}
	else{
		cout<<"Not found !"<<endl;
	}
	// Xóa phần tử trong set
	s.erase(200); // s.erase(s.find(200));
	cout<<s.size()<<endl;

	// Duyệt các phần tử của set - set tự duy trì các phần tử từ nhỏ tới lớn
	for (int x:s){
		cout<<x<<" ";
	}
	cout<<endl;

	/*
	for (auto x:s){
		cout<<x<<" ";
	}
	cout<<endl;

	for(set<int>::iterator it=s.begin(); it != s.end();it++){
		count<<*it<<" ";
	}

	*/

	// Truy cập đến phần tử đầu tiên
	cout<<*s.begin()<<endl;
	// Truy cập đến phần tử cuối cùng
	cout<<*s.rbegin()<<endl;
	return 0;
}