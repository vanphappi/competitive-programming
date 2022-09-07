#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7
// thuật toán tìm ra thứ tự các đỉnh sao cho đỉnh đó phải là đứng trước đinh phía sau
// trong đồ thị có hướng
/*
TESTCASE
7 7
1 2
2 3
2 4
3 5
3 5
1 6
7 6
 */

int n,m;
vector<int> adj[1001];
bool visited[1001];
vector<int> topo;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	topo.push_back(u);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	for(int i=1;i<=n;i++){
		if(!visited[i])
			dfs(i);
	}
	reverse(topo.begin(),topo.end());
	for(int x:topo){
		cout<<x<<" ";
	}
	return 0;
}
