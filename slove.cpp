#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7


void slove(){
	string s;
	cin>>s;
	stack<int> val;
	stack<char> res;
	int i=0;
	while(i<=s.size()){
		//cout<<i<<endl;
		if(i<s.size() && isdigit(s[i])){
			int num=0;
			while(i<s.size() && isdigit(s[i])){
				num=num*10+(s[i]-'0');
				i++;
			}
			val.push(num);
			i--;
		}
		else{
			if(res.empty()){
				//cout<<i<<endl;
				res.push(s[i]);
			}
			else{
				//cout<<i<<endl;
				if(res.top()=='+'){
					int k=val.top();
					val.pop();
					val.push(k+val.top());
					res.pop();
				}
				else if(res.top()=='-'){
					int k=val.top();
					val.pop();
					val.push(val.top()-k);
					res.pop();
				}
				res.push(s[i]);
			}
		}
		i++;
	}
	cout<<val.top()<<endl;
	//res.pop_back();
	//cout<<res.top()<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	slove();
	return 0;
}
