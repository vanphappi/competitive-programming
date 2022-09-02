#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

/*
INP
9 9
1 2
1 3
1 5
2 4
3 6 
3 7
3 9
5 8
8 9
 */

int n,m;
vector<int> adj[1001];
bool visited[1001];

//chuyển đổi danh sách cạnh sang danh sách kề
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

void dfs(int u){
	cout<<u<<" "; // in ra thứ tự duyệt
	visited[u]=true; // đánh dấu đỉnh đã duyệt
	for(int v:adj[u]){
		if(!visited[v])
			dfs(v);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	dfs(1);
	return 0;
}
