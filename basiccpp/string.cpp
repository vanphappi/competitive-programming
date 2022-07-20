#include <bits/stdc++.h>
using namespace std;

// cin, getline()
// length()
// size()
// Truy cập kí tự của xâu thông qua chỉ số
// stoi: int
// stoll: long long
// to_string()
// stringstream

int main(){
	// Xâu không dấu cách
	string s;
	cin>>s; // Vẫn còn phím enter
	cout<<s<<endl;
	cin.ignore();
	// Xâu có dấu cách
	string s2;
	getline(cin,s2);
	cout<<s2<<endl;
	// Kích thước của xâu
	cout<<s.length()<<endl;
	cout<<s.size()<<endl;
	//Duyệt từ kí tự trong xâu
	for(int i=0;i<s.length();i++){
		cout<<s[i]<<endl;
	}
	for(char x:s){
		cout<<x<<endl;
	}
	// Nối 2 chuỗi với nhau
	string c=s+s2;
	cout<<c<<endl;
	// So sánh 2 xâu theo thứ tự từ điển
	if(s>s2){
		cout<<"s lon hon s2"<<endl;
	}
	else if(s==s2){
		cout<<"s bang(giong) s2"<<endl;
	}
	else{
		cout<<"s nho s2"<<endl;
	}
	// Cắt chuỗi s.substr(<Vị trí bắt đầu>,<Số lượng kí tự>)
	string a=s.substr(0,2);
	cout<<a<<endl;
	
	// Chuyển đối xâu kí tự thành số
	string n="123";
	int n1= stoi(n);
	cout<<n1<<endl;
	string n2="12332536246262";
	long long n3=stoll(n2);
	cout<<n3<<endl;
	
	// Chuyển đổi số thành kí tự (nguyên, thực)
	int z=12335;
	string z1=to_string(z);
	cout<<z1<<endl;
	
	// Tách từng từ trong chuỗi
	string k="Java Python  Lap Trinh";
	stringstream ss(k);
	string tmp;
	while(ss >> tmp){
		cout<<tmp<<endl;
	}
	// Tách từ từ trong chuỗi theo kí tự
	string k1="Java.Python.Lap.Trinh";
	stringstream ss1(k1);
	string tmp1;
	while(getline(ss1,tmp1,'.')){
		cout<<tmp1<<endl;
	}
	
	return 0;
}
