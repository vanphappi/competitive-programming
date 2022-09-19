#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//O(n^2)

void insertionsort(int a[], int n){
	for(int i = 1; i<n;i++){
		int key=a[i], pos=i-1;
		while(pos >= 0 && key < a[pos]){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = key;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	insertionsort(a,5);
	for(int x: a)
		cout<<x<<" ";
	return 0;
}
