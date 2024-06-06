#include<iostream>
#include<stack>

using namespace std;

int main(){
	string s;
	stack<char> st;//tao bien st chieu stack char
	getline(cin,s);//nhap s
	for (int i = 0; i < s.length(); i++){
		st.push(s[i]);
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}

	return 0;
}
