#include <bits/stdc++.h>
using namespace std;

//(key,value)

int main(){
	// map<datatype1,datatype2> mp;
	map<int,int> mp;
	/*mp[100]=200; // (100,200)
	mp[200]=300;
	mp.insert({300,400});
	mp.insert({400,500});
	cout<<mp.size()<<endl;
	mp[100]=300;*/
	cout<<mp.size()<<endl;

	for(pair<int,int> x:mp){
		cout<<x.first<<" "<<x.second<<endl;
	}

	/*for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
	for(map<int,int> :: iterator it=mp.begin();it !=mp.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}*/

	if(mp.count(100))
		cout<<"Found !"<<endl;
	else
		cout<<"Not found !"<<endl;	

	/*if(mp.find(100) !=mp.end())
		cout<<"Found !"<<endl;
	else
		cout<<"Not found !"<<endl;*/
	mp.erase(100);

	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	/*
	Đếm số lần xuất hiện của các phần tử trong mảng, sau đó in ra kèm theo tần suất của nó
	INPUT
	8
	1 1 2 1 3 5 -4
	OUTPUT
	1 4
	2 1
	3 1
	-4 1
	5 1
	 */
	map<int,int> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x]++;
	}

	for(auto it:m){
		cout<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}