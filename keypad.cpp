#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	scanf ("%d", &test);
	while (test--){
	    string str;
	    cin>>str;
	    for (int i = 0; i < str.length(); i++){
	       if ( str[i] == 'a' || str[i] == 'b' || str[i] == 'b' ) printf ("2");
	       else if ( str[i] == 'd' || str[i] == 'e' || str[i] == 'f' ) printf ("3");
	       else if ( str[i] == 'g' || str[i] == 'h' || str[i] == 'i' ) printf ("4");
           else if ( str[i] == 'j' || str[i] == 'k' || str[i] == 'l' ) printf ("5");
	       else if ( str[i] == 'm' || str[i] == 'n' || str[i] == 'o' ) printf ("6");
	       else if ( str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 'S' ) printf ("7");
	       else if ( str[i] == 't' || str[i] == 'u' || str[i] == 'v' ) printf ("8");
	       else printf ("9");
	    }
	    printf ("\n");
	}
	return 0;
}
