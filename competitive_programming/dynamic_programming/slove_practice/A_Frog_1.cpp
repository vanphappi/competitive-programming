#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

/* 
Link Bài tập: https://atcoder.jp/contests/dp/tasks/dp_a
Giải pháp sử dụng quy hoạch động:
- Gọi dp[i] là năng lượng cóc tiêu thụ khi nhảy tới vị trí i
Node: ar là mảng lưu các chiều cao các cột theo đề bài, abs hàm giá trị tuyệt đối c++
- Ta có dp[0] = 0 , dp[1] = abs(ar[1] - ar[0]),
  dp[2] sẽ có 2 phương án 1 là nhảu từ vị trí 1 tức là dp[3]= dp[1] + abs(ar[2]-ar[1])
                phương án 2 là nhảy từ vị trí 0 tức là dp[3]= dp[0] + abs(ar[2]-ar[0])
  dp[3] sẽ được gán bằng giá trị nhỏ nhất của 2 phương án
  vì vây tổng quát lên của dãy truy hồi
  dp[n]=min( dp[n-1]+abs(ar[n]-ar[n-1]) , dp[n-1] + abs(ar[n]-ar[n-2]))
*/

//cách 1 Sử dụng đệ quy - quy hoạch động
ll forg(int n, ll dp[], ll ar[]){
	if(dp[n] != -1 && n!= 0)
		return dp[n];
	if(n == 0){
		dp[n]=0;
		return dp[n];
	}
	if(n == 1){
		dp[n]=abs(ar[n]-ar[n-1]);
		return dp[n];
	}
	dp[n]=min(forg(n-1,dp,ar)+abs(ar[n]-ar[n-1]),forg(n-2,dp,ar)+abs(ar[n]-ar[n-2]));
	return dp[n];
}

void slove(){
	int n;
	cin>>n;
	ll dp[n];
	ll ar[n];
	for (int i=0;i<n;i++){
		dp[i]=-1;
		cin>>ar[i];
	}
	cout<<forg(n-1,dp,ar);

	//cách 2 Sử dụng vòng lập - quy hoạch động
	/*for(int i=1;i<n;i++){
		if(i==0)
			dp[i]=0;
		if(i==1)
			dp[i]=abs(ar[i]-ar[i-1]);
		if(i>=2{
			ll case1=dp[i-1]+abs(ar[i]-ar[i-1]);
			ll case2=dp[i-2]+abs(ar[i]-ar[i-2]);
			dp[i]=min(case1,case2);
		}
	}
	cout<<dp[n-1];*/
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	slove();
	return 0;
}
