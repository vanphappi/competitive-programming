#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7

//FIFO
//O(1)
//push
//pop
//empty
//size
//front

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	return 0;
}
