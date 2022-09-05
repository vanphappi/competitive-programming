#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long
#define mod = 10e9+7
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};

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

string decodeString(string s) {
        string ans;
        stack<char> st;
        stack<char> check;
        for(char i:s){
            st.push(i);
            if(i=='[')
                check.push(i);
            else if(i==']'){
                check.pop();
                st.pop();
                if(!check.empty()){
                    string tmp;
                    while(st.top() != '['){
                        tmp += to_string(st.top());
                        st.pop();
                    }
                    st.pop();
                    int n=stoi(to_string(st.top()));
                    reverse(tmp.begin(),tmp.end());
                    ans= tmp+ans;
                    for(int k=0;k<n;++k)
                        ans += ans;
                }
                else{
                    string tmp;
                    while(st.top() != '['){
                        tmp += to_string(st.top());
                        st.pop();
                    }
                    st.pop();
                    int n=stoi(to_string(st.top()));
                    reverse(tmp.begin(),tmp.end());
                    for(int k=0;k<n;++k)
                        tmp += tmp;
                    
                    if(!st.empty()){
                        while(!st.empty()){
                            tmp=to_string(st.top())+tmp;
                            st.pop();
                        }
                    }
                    ans += tmp;
                }
            }
            
        }
        while(!st.empty()){
            ans = to_string(st.top()) + ans;
            st.pop();
        }
        return ans;
    }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//slove();
	cout<<decodeString("3[a]2[bc]");
	return 0;
}
