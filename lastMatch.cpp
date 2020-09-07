#include <bits/stdc++.h>
using namespace std;

int main (){
    int test; scanf ("%d", &test);
    while (test--){
        string s, t;
        cin>> s>>t;
        int x = s.rfind(t);
        printf ("%d\n",x+1 );
    }
    return 0;
}
