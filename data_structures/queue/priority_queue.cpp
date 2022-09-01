#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7
//https://docs.google.com/document/d/1-I8aVvGRe3-6_Nt0bvSrtfRsvYGMWoiL/edit
//push()
//size()
//empty()
//pop()
//top() : lay ra phan tu o dau mac dinh la lon nhat

void theory(){
	//priority_queue<int> pq;  
	priority_queue<int,vector<int>,greater<int>> pq; // phan tu top la phan tu nho nhat
	pq.push(1);
	pq.push(3);
	pq.push(4);
	pq.push(5);
	cout<<pq.top()<<endl;
	pq.push(30);
	pq.push(100);
	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;
}

/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. 
Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. 
Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].
vd Input:
4
4 3 2 6
Output:
29
 */

void demo_1(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) 
		cin>>x;
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int x:a)
		pq.push(x);
	long long ans=0;
	while(pq.size() > 1){
		int top=pq.top();
		pq.pop();
		top += pq.top();
		ans+=top;
		pq.pop();
		pq.push(top);
	}
	cout<<ans;

}

/*
Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. 
Ta định nghĩa giá trị của xâu S[] là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. 
Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 32 + 22 + 12 + 12 = 15. 
Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự trong xâu.
vd: Input:
1
ABCC
Output:
3
 */

void demo_2(){
	int k;
	cin>>k;
	string s;
	cin>>s;
	map<char,int> mp;
	for(char i:s)
		mp[i]++;
	priority_queue<int> pq;
	for(auto i:mp)
		pq.push(i.second);
	while(k>0){
		int top=pq.top();
		pq.pop();
		top--;
		k--;
		pq.push(max(0,top));
	}
	long long ans=0;
	while(!pq.empty()){
		ans+= 1ll * pq.top()*pq.top();
		pq.pop();
	}
	cout<<ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	demo_2();
	return 0;
}
