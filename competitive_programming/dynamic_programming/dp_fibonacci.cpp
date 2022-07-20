#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

ll F[1005];

ll fibo(ll n){
	if(F[n] != -1){
		return F[n];
	}
	if(n == 0 || n == 1)
		return F[n]=1;
	F[n]=fibo(n-1)+fibo(n-2);
	return F[n];
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<1005;i++){
		F[i]=-1;
	}
	cout<<fibo(n);
}