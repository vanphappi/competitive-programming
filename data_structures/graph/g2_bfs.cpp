#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

/*
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9 
 */

int n,m;
vector<int> adj[1001];
bool visited[1001];

// chuyển đổi danh sách cạnh sang danh sách kề
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

void bfs(int u){
	queue<int> q; 
	q.push(u); // đẩy đỉnh duyệt vào hàng đợi
	visited[u]=true; // đánh dấu đỉnh đã duyệt qua

	while(!q.empty()){
		int v=q.front(); // lấy ra đỉnh
		q.pop();
		cout<<v<<" "; // in ra thứ tự đỉnh duyệt
		for(int i:adj[v]){
			if(!visited[i]){ // kiểm tra đỉnh trong danh sách kề của v đã duyệt hay chưa
				q.push(i); // đẩy đỉnh chưa duyệt vào hàng đợi
				visited[i]=true; // đánh dấu đỉnh đã duyệt qua
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	bfs(1);
	return 0;
}
