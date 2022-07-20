#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;
/*
Đề bài: Một căn nhà có chưa n đồ vật, mỗi đồ vật có khối lượng k và giá trị
bán ra là m. Một tên ăn trộm quyết định sẽ trộm căn nhà này, hắn ta đem theo
một cái túi có sức chứa theo khối lượng là w, nếu hắn ta trộm các đồ vật có tổng
khối lượng lớn hơn sức chứa thì sẽ bị rách và không trộm được gì cả. Giúp tên
trộm này trộm đồ vật sao cho có tổng giá trị cao nhất mà không làm rách túi.

Input: dòng đầu bao gồm n (số lượng đồ vật trong nhà) và w (sức chứa của túi), 
n dòng tiếp theo khối lượng và giá trị của từng đồ vật.
VD:
INPUT
6 15
3 6
4 2
5 5
6 8 
3 5
10 9
OUTPUT

*/
#define ll long long
#define mod = 10e9+7

void slove(){
	int n,w;
	cin>>n>>w;
	int arr[n+1][2];
	for(int i=1;i<=n;i++){
		int k,m;
		cin>>k>>m;
		arr[i][0]=k;
		arr[i][1]=m;
	}
	int dp[n+1][w+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(i==0 || j == 0)
				dp[i][j]=0;
			else{
				dp[i][j]=dp[i-1][j];
				if(j-arr[i][1]>=0)
					dp[i][j]=max(dp[i][j],dp[i-1][j-arr[i][1]]+arr[i][0]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<w;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	slove();
}