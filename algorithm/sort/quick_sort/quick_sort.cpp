#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};

int partition_lomuto(int a[], int l, int r){
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;	
}

int partition_hoare(int a[], int l, int r){
	int pivot=a[r];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++;
		}while(a[i]<pivot);

		do{
			j--;
		}while(a[j]>pivot);

		if(i<j){
			swap(a[i],a[j]);
		}
		else
			return j;
	}
}

void quick_sort(int a[], int l, int r){
	if(l>=r) 
		return;
	int p=partition_lomuto(a,l,r);
	quick_sort(a,l,p-1);
	//quick_sort(a,l,p);
	quick_sort(a,p+1,r);
}

int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[6]={1,5,2,4,0,1};
	quick_sort(a,0,5);
	for(int x:a)
		cout<<x<<" ";
	return 0;
}
