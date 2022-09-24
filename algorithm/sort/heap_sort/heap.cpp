#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};


//https://drive.google.com/file/d/1HKGCE5zzQ5bEbo6BAuN8J7dWy8tvJu2g/view

void heapify(int a[],int n, int i){
	int l=2*i+1;
	int r=2*i+2;
	int largest=i;
	if(l<n && a[l]>a[largest])
		largest=l;
	if(r<n && a[r]>a[largest])
		largest=r;
	if(largest != i){
		swap(a[i],a[largest]);
		heapify(a,n,largest);
	}

}

void heapsort(int a[], int n){
	// tao max heap
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
 
    freopen("inputf.in", "r", stdin);
 
    freopen("outputf.out", "w", stdout);
   
	#endif
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[6]={1,12,9,5,6,10};
	heapsort(a,6);
	for(int x: a)
		cout<<x<<" ";
	return 0;
}
