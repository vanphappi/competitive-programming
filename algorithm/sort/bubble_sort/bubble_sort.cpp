#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//O(n^2)

void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	bubblesort(a,5);
	for(int x: a)
		cout<<x<<" ";
	return 0;
}
