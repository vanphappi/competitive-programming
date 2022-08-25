#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//https://vnoi.info/wiki/algo/data-structures/Stack.md
// LIFO : Last in first out
// push
// pop
// top
// size
// empty
// O(1)

// Chuyen doi thap phan sang nhi phan
void demo_1(){
	int n;
	cin>>n;
	stack<int> st;
	while(n != 0){
		st.push(n%2);
		n=n/2;	
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}

// Kiem tra bieu thuc dau ngoac dung
void demo_2(){
	string s;
	cin>>s;
	stack<char> st;
	for(char x: s){
		if(x == '('){
			st.push(x);
		}
		else{
			if(st.empty()){
				cout<<"INVALID"<<endl;
				return;
			}
			else st.pop();
		}
	}
	if(st.empty()){
		cout<<"VALID"<<endl;
	}
	else{
		cout<<"INVALID"<<endl;
	}
}

// Phan tu dau tien lon hon ben phai
/*
INPUT
4
6 1 5 7
OUTPUT
7 5 7 -1 
 */
void demo_3(){
	int n;
	cin>>n;
	int a[n],b[n];
	stack<int> st;
	for(int &x : a){
		cin>>x;
	}
	for(int i=0;i<n;i++){
		if(st.empty())
			st.push(i);
		else{
			while(!st.empty() && a[st.top()]<a[i]){
				b[st.top()]=a[i];
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		b[st.top()]=-1;
		st.pop();
	}
	for(int x : b){
		cout<<x<<" ";
	}
		
}

//Diện tích hình chữ nhật lớn nhất trên biểu đồ ( Maximum Rectangular Area In Histogram ).
/*Input: heights = [2,1,5,6,2,3]
Output: 10
https://leetcode.com/problems/largest-rectangle-in-histogram/
*/

void demo_4(){
	int n;
	cin>>n;
	int a[n];
	stack<int> s;
	int res=INT_MIN;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a[i]=k;
	}
	int i=0;
	while(i<n){
		if(s.empty() || a[s.top()] <= a[i]){			
			s.push(i);
			i++;
		}
		else{
			int idx=s.top();
			s.pop();
			if(s.empty()){
				res=max(res,a[idx]*i);
			}
			else{
				res=max(res,a[idx]*(i-s.top()-1));
			}
		}
	}
	while(!s.empty()){
		int idx=s.top();
		s.pop();
		if(s.empty()){
			res=max(res,a[idx]*i);
		}
		else{
			res=max(res,a[idx]*(i-s.top()-1));
		}
	}
	cout<<res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	demo_4();
	return 0;
}

