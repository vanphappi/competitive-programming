#include <bits/stdc++.h>
using namespace std;

// pair<datatype1,datatype2> v;
// make_pair(a,b)
// v.first
// v.second

int main(){
	// Khai báo 1 kiểu pair
	pair<int,int> v={100,200};
	/*
	pair<int,int> v;
	pair<pair<int,int>,int> v;
	*/
	// Phần tử thứ nhất
	cout<<v.first<<endl;
	// Phần tử thứ hai
	cout<<v.second<<endl;
	// Kiểu tuple
	tuple<int,string,int> t={1,"C++",3};
	cout<<get<1>(t)<<endl;
	return 0;
}
