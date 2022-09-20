#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//O(nlogn)

void merge(int a[], int l, int r, int m){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0, j=0;
	while(i < x.size() && j < y.size()){
		if(x[i] >= y[j]){
			a[l]=y[j];
			j++;
			l++;
		}
		else{
			a[l]=x[i];
			i++;
			l++;
		}
	}

	while(i < x.size()){
		a[l]=x[i];
		i++;
		l++;
	}

	while(j < y.size()){
		a[l]=y[j];
		j++;
		l++;
	}
}

void mergeSort(int a[], int l, int r){
	if(l >= r)
		return;
	int m=(int)(l+r)/2;
	mergeSort(a,l,m);
	mergeSort(a,m+1,r);
	merge(a,l,r,m);
}

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[6]={1,5,2,4,0,1};
	mergeSort(a,0,5);
	for(int x:a)
		cout<<x<<" ";
	return 0;
}
