#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// DFS, BFS tren luoi o vuong

/*
TESTCASE
6 6
xxxooo
ooxooo
oxxxxo
ooooox
xxoxox
xoxxox
 */

int n,m;
char a[1001][1001];
bool visited[1001][1001];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void dfs(int i, int j){
	visited[i][j]=true;
	for(int k=0;k<4;k++){
		int in=i+dx[k];
		int jm=j+dy[k];
		if(in>=1 && in<=n && jm>=1 && jm<=m && a[in][jm] =='x' && !visited[in][jm]){
			dfs(in,jm);
		}
	}
}

void bfs(int i, int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	visited[i][j]=true;
	while(!q.empty()){
		pair<int,int> v=q.front();
		q.pop();
		for(int k=0;k<4;++k){
			int in=v.first+dx[k];
			int jm=v.second+dy[k];
			if(in>=1 && in<=n && jm>=1 && jm<=m && a[in][jm]=='x' && !visited[in][jm]){
				q.push({in,jm});
				visited[in][jm]=true;
			}
		}
	}
}

void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	}
	memset(visited,false,sizeof(visited));
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j] =='x' && !visited[i][j]){
				cnt++;
				bfs(i,j);
			}
		}
	}
	cout<<cnt<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	return 0;
}
