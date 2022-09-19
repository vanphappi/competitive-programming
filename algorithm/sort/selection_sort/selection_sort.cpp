#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//O(n^2)

void selectionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		// dung i bien de luu chi so phan tu nho nhat
		int min=i;
		for(int j=i+1;j<n;++j){
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	selectionsort(a,5);
	for(int x: a)
		cout<<x<<" ";
	return 0;
}
