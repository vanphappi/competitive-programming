#include <bits/stdc++.h>
using namespace std;

//https://vnoi.info/wiki/translate/he/Number-Theory-3.md

// (a^b)%c

long long pow_n(long long a, long long b, long long c){
	long long ans=1;
	for(int i=0;i<=b;i++){
		ans *=a;
	}
	return ans%c;
}

//O(b)
// (x.y)%n=((x%n).(y%n))%n
long long power(long long a, long long b, long long c){
	long long ans=1;
	for(int i=0;i<=b;i++){
		ans *=a;
		ans %=c;
	}
	return ans;
}

//O(log2b)

long long sqr(long long x){
	return x*x;
}

long long pow_ad(long long a, long long b, long long mod){
	if(b==0) 
		return 1%mod;
	else{
		if(b%2==0) 
			return sqr(pow_ad(a,b/2,mod)) % mod;
		else 
			return a*(sqr(pow_ad(a,b/2,mod)) % mod) % mod;
	}
}

int main(){
	cout<<pow_n(5,19,1007)<<endl;
	cout<<power(5,19,1007)<<endl;
	cout<<pow_ad(5,19,1007)<<endl;
	cout<<5/2;
	return 0;
}