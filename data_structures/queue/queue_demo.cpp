#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//https://docs.google.com/document/d/1-I8aVvGRe3-6_Nt0bvSrtfRsvYGMWoiL/edit

//FIFO
//O(1)
//push
//pop
//empty
//size
//front


//Liệt kê số nhị phân từ 1 -> N

void demo_1(){
	vector<string> v;
	v.push_back("1");
	queue<string> q;
	q.push("1");
	while(v.size()<10000){
		string top=q.front();
		q.pop();
		v.push_back(top+"0");
		v.push_back(top+"1");
		q.push(top+"0");
		q.push(top+"1");
	}
	for(int i=0;i<10;i++){
		cout<<v[i]<<" ";
	}
}

/*
Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:
Thao tác (a): Trừ S đi 1  (S = S-1) ;
Thao tác (b): Nhân S với 2 ( S = S*2);
Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau:
Thao tác (a): 2*2 = 4;
Thao tác (b): 4-1 = 3;
Thao tác (a): 3*2 = 6;
Thao tác (b): 6-1 = 5;
 */

void demo_2(){
	int s,t;
	cin>>s>>t;

	set<int> se;
	queue<pair<int,int>> q;
	q.push({s,0});
	se.insert(s);
	while(!q.empty()){
		pair<int,int> tmp=q.front();
		q.pop();
		if(tmp.first == t){
			cout<<tmp.second;
			break;
		}
		if(tmp.first - 1 == t|| tmp.first*2 == t){
			cout<<tmp.second+1;
			break;
		}
		if(se.count(tmp.first*2) == 0 && tmp.first < t){
			q.push({tmp.first*2,tmp.second+1});
			se.insert(tmp.first*2);
		}
		if(se.count(tmp.first-1) == 0 && tmp.first > 1){
			q.push({tmp.first-1,tmp.second+1});
			se.insert(tmp.first-1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	demo_2();
	return 0;
}
