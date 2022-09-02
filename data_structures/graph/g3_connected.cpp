#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// Đếm số thành phần liên thông trên đồ thi vô hướng.

/*
INP
10 8
1 2
2 3
2 4
3 6
6 7
3 7
5 8
8 9
OUT
3
 */

int n,m;
vector<int> adj[1001];
bool visited[1001];

void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}			
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}	
}


void connectedcomponent(){
	int cnt=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){ // kiểm tra đỉnh đã được duyệt qua hay chưa
			//cout<<i<<endl;
			cnt++; // tăng số lượng thành phần liên thông
			dfs(i);
		}
	}
	cout<<cnt<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	connectedcomponent();
	
	return 0;
}
