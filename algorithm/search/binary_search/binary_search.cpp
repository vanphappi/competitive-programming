#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// O(logn)
// Cac phan tu phai duoc sap xep tang dan hoac giam dan

bool bs(int a[], int n, int x){
	int l=0, r=n-1;
	while(l <= r){
		int m=(int)(l+r)/2;
		if(a[m] == x){
			return true;
		}
		else if(a[m] < x){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return false;
}

bool bs_recursion(int a[], int n, int l, int r, int x){
	if(l>r)
		return false;
	int m=(int)(l+r)/2;
	if(a[m] == x)
		return true;
	else if(a[m] < x)
		return bs_recursion(a,n,m+1,r,x);
	else 
		return bs_recursion(a,n,l,m-1,x);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,x,a[n];
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(bs_recursion(a,n,0,n-1,x))
		cout<<"Found!";
	else
		cout<<"Not Found!";	
	return 0;
}
