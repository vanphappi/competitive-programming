#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

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

	/*for(int i=1;i<n;i++){
		if(i==1)
			dp[i]=abs(ar[i]-ar[i-1]);
		else{
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
