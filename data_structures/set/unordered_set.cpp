#include <bits/stdc++.h>
using namespace std;

// unordered_set
// O(1)
// O(n)

int main(){
	unordered_set<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(300);
	ms.insert(500);
	ms.insert(400);
	ms.insert(100);
	ms.insert(200);
	for(auto x:ms){
		cout<<x<<" ";
	}
	cout<<endl;
}