#include <bits/stdc++.h>
using namespace std;

int main (){
    int test; scanf ("%d", &test);
    while (test--){
        string x, y;
        cin>>x>>y;
        int hash[26] = {0}, flag;
        if ( x.length() != y.length()) printf ("0\n");
        else{
            for (int i = 0; i < x.length(); i++){
                if ( hash[x[i] - 'a'] == 0) {
                    hash[x[i] - 'a' ] = (int) y[i];
                    flag = 1;
                }
                else {
                    if ( hash [x[i] - 'a'] == y[i]) {
                        flag = 1;
                        continue;
                    }
                    else {
                        flag = 0;
                        printf ("0\n");
                        break;
                    }
                }
            }
            if (flag == 1) printf ("1\n");
        }
    }
    return 0;
}
