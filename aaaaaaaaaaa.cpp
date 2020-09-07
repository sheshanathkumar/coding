#include <bits/stdc++.h>
using namespace std;

int isPelindrome ( string s, int i, int j){
	for (; i <= j ; i++, j-- ){
		if ( s[i] != s[j] )
			return 0;
	}
	return 1;
}

int main (){
	int test; cin>>test;
	while (test--){
	string s; cin>>s;
	int total = s.length();
	for (int i = 0; i < s.length() - 1; i++){
		for ( int j = i + 1; j < s.length (); j++ ){
			if ( s[i] == s[j] ){
			if ( isPelindrome (s, i , j) ) total ++;
		}
		}
	}
	cout<<total<<endl;
	}
	return 0;
}
