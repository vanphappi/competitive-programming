#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

int m,n;
vector<int> adj[1001];
vector<int> topo;
int in[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		in[y]++;
	}
}

void kahn(){
	queue<int> q;
	for(int i=1;i<=n;++i){
		if(in[i] == 0)
			q.push(i);
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		topo.push_back(u);
		for(int v:adj[u]){
			in[v]--;
			if(in[v]==0)
				q.push(v);
		}
	}
	for(int x:topo)
		cout<<x<<" ";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	inp();
	kahn();
	return 0;
}
