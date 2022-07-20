#include <bits/stdc++.h>

using namespace std;

// vector<kiểu dữ liệu> ten_vector;
// push_back() - đẩy 1 phần tử vào trong vector
// size() - kích thước vector
// duyệt thông qua index
// duyệt bằng for each
// duyệt bằng iterator
// vector<int> v
// vector<int> v(n)
// vector<int> v(n, value)
int main(){
	// khai báo 1 vector
	vector<int> v;
	// thêm 1 phần tử vào vector
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	// kích thước vector
	cout<<v.size()<<endl;
	// truy cập các phần thông qua chỉ số trong vector
	cout<<"Phan tu dau tien trong vector:"<<v[0]<<endl;
	cout<<"Phan tu cuoi cung trong vector:"<<v[v.size()-1]<<endl;
	// duyệt thông qua chỉ số
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	// duyệt thông qua for each
	for(int x:v){
		cout<<x<<endl;
	}
	// duyệt thông qua iterator
	for(vector<int>::iterator it=v.begin(); it != v.end();it++){
		cout<<*it<<endl;
	}
	// duyệt qua auto
	for(auto it=v.begin();it !=v.end();it++){
		cout<<*it<<endl;
	}
	//truy cập phần tử
	cout<<v[2]<<endl;
	cout<<*(v.begin()+2)<<endl;
	
	// khai báo vector nhưng đã có sẵn n phần tử
	int n; cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	// khai báo vector có n phần tử và khởi tạo giá trị cho vector
	int n2; cin>>n2;
	vector<int> v2(n,0);
	return 0;
}
