#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

template<class T>
void swap(T *a, T *b){
	T tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int *a=NULL;

	a=new int[6];
	for(int i=0;i<6;i++) a[i]=i;
	for(int i=0;i<7;i++) cout<<a[i]<<" ";
	delete[] a;
	return 0;
}
