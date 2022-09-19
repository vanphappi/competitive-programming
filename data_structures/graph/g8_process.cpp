#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//Kiểm Tra Chu Trình Trên Đồ Thị Có Hướng và Vô Hướng.

int n,m;
vector<int> adj[1001];
bool visited[100];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

//Kiểm tra đồ thị vô hướng có chu trình không bằng DFS
bool dfs(int u,int par){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			if(dfs(v,u))
				return true;
		}
		else{
			if(v != par)
				return true;
		}
	}
	return false;
} 
s
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			if(dfs(i,0)){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
