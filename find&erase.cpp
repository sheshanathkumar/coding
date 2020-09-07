#include <bits/stdc++.h>
using namespace std;

int main() {
	int test; scanf ("%d", &test);
	while (test--){
	    string s;
	    cin>>s;
	    int i = 0;
        for (int i = 0; i < s.length(); i++){
            int dex = s.find("LIE");
            s.replace(dex, 3, " ");
        }
	    cout<<s<<endl;
	}
	return 0;
}
