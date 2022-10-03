#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// thuật toán quay lui, Quay lui xâu nhị phân có độ dài N

int n;
int a[100];

void inkq(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void binarylongn(int i){
	//Duyệt các khả năng của a[i]
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n)
			inkq();
		else
			binarylongn(i+1);
	}
}

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	n=3;
	binarylongn(1);
	return 0;
}
