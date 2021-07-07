#include <bits/stdc++.h>

using namespace std;

int precedence(char c) {
	if(c == '-' || c == '+')
		return 1;
	if(c == '*' || c == '/')
		return 2;
	if(c == '^')
		return 3;
	return -1;
}

string inftopre(string s) {
	reverse(s.begin(), s.end());
	string o; stack<char> st;
	for(int i=0; i<s.length(); i++) {
		int d = precedence(s[i]);
		if(d == -1) {
			if(s[i] == ')')
				st.push('(');
			else if(s[i] == '(') {
				while(st.top() != '(') {
					o.push_back(st.top());
					st.pop();
				}
				st.pop();
			}
			else
				o.push_back(s[i]);
		}
		else {
			if(d != 3) {
				while(!st.empty() && precedence(st.top()) > d) {
					o.push_back(st.top());
					st.pop();
				}
			}
			else {
				while(!st.empty() && precedence(st.top()) >= d) {
					o.push_back(st.top());
					st.pop();
				}
			
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()) {
		o.push_back(st.top());
		st.pop();
	}
	reverse(o.begin(), o.end());
	return o;
}

int main() {
	string s = "(x+y*z)/w+u";
	cout << inftopre(s) << endl;
	return 0;
}
