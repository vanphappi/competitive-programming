#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

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
void demo_3(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int &x : a){
		cin>>x;
	}
	for(int i=0;i<n;i++){
		
	}
		
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	demo_2();
	return 0;
}

