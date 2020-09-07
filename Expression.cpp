#include <bits/stdc++.h>
using namespace std;

int priority (char x) {

	if (x == '(') return 0;
	else if (x == '%' || x == '/' || x == '*') return 2;
	else if (x == '+' || x == '-') return 1;
	else if (x == '^') return 3;
	else return 0;
}


string infToPos(string exp) {
	stack <char>s;
	string psf;
	char sym;
	for (int i = 0; i < exp.size(); i ++) {
		sym = exp[i];
		
		switch (sym) {
			case '(' :
				s.push(sym);
				break;
			case ')' :
				while (s.top() != '(') {
					psf = psf + s.top();
					s.pop();
				}
				s.pop();
				break;
			case '/':
			case '*':
			case '+':
			case '-':
			case '^':
				while (!s.empty() && 
					priority (s.top()) >= priority(sym) ) {
					psf = psf + s.top();
					s.pop();
				}
				s.push(sym);
				break;
			default :
				psf = psf + sym;
		}
	}
	return psf;

}

int main () {
	int t; cin>>t;
	while (t --) {
		string exp;
		cin>>exp;
		cout<<infToPos (exp)<<"\n";
	}
	return 0;
}