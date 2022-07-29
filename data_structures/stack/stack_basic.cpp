#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

// LIFO : Last in first out
// push
// pop
// top
// size
// empty
// O(1)


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	return 0;
}

