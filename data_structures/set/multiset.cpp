#include <bits/stdc++.h>
using namespace std;

// multiset<datatype>; - Cho phép các phần tử trong set giống nhau

int main(){
	multiset<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(300);
	ms.insert(500);
	ms.insert(400);
	ms.insert(100);
	ms.insert(200);
	cout<<ms.size()<<endl;
	for(int x:ms){
		cout<<x<<" ";
	}
	cout<<*ms.find(100)<<endl;
	cout<<ms.count(100)<<endl;
	ms.erase(100); // Xóa hết các phần tử 100 trong set
	/*
	Cho mảng có n phần tử và số nguyên k, đối với mỗi dãy con liên
	tiếp có chiều k, in ra được các phần tử lớn nhất trong dãy đó
	Vd:
	Input:
	10 3
	1 2 3 1 4 5 1 8 9 10
	Output:
	3 3 4 5 8 9 10
	*/
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int &x:a) cin >> x;
	multiset<int> ms_n;
	for(int i=0;i<k;i++){
		ms_n.insert(a[i]);
	}
	for(int i=k;i<n;i++){
		cout<<*ms_n.rbegin()<<" ";
		ms_n.erase(ms_n.find(a[i-k]));
		ms_n.insert(a[i]);
	}
	cout<<*ms_n.rbegin()<<endl;
	return 0;
}