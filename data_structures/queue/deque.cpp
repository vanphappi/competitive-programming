#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//stack: LIFO
//queue: FIFO
//deque: double end queue
//
//size()
//push_back() : day vao cuoi
//push_front() : day vao dau
//pop_back() : xoa cuoi
//pop_front() : xoa dau
//empty()
//back() : lay ra phan tu dau
//front() : lay phan tu cuoi


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

void slove(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a) 
		cin>>x;
	deque<int> q;
	for(int i=0;i<k;i++){
		while(!q.empty() && a[q.back()] <a[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	cout<<a[q.front()];
	for(int i=k;i<=n-1;i++){
		if(q.front()<= i-k){
			//cout<<a[q.front()];
			q.pop_front();
		}
		while(!q.empty() && a[q.back()] <a[i]){
			q.pop_back();
		}
		q.push_back(i);
		cout<<a[q.front()];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	slove();
	return 0;
}
