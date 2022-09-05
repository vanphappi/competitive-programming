#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// Đường đi trên đồ thị không có trọng số
// TESTCASE
// 8 10
// 1 2
// 2 3
// 2 4
// 3 6
// 3 7
// 6 7
// 5 8
// 8 9
// 1 7
int n,m,s,t;
vector<int> adj[1001];
bool visited[10001];
int parent[1001];

void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			//Ghi nho cha cua v la u
			parent[v]=u;
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
				parent[x]=v;
			}
		}
	}
}

void path(int s, int t){
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	//dfs(s);
	bfs(s); // Tren do thi khong co trong so thi duong di khi duyet bang thuat toan bfs la duong di ngan nhat
	if(!visited[t]){
		cout<<"Khong co duong di"<<endl;
	}
	else{
		//Truy vet duong di s va t
		vector<int> p;
		while(t != s){
			p.push_back(t);
			t=parent[t];
		}
		p.push_back(s);
		reverse(p.begin(),p.end());
		for(int i:p)
			cout<<i<<" ";
	}
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
	cin>>s>>t;
	path(s,t);
	return 0;
}
