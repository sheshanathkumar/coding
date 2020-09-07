#include <bits/stdc++.h>
using namespace std;

int main (){
    int test; scanf ("%d", &test);
    while ( test --){
        string s, t;
        cin>>s>>t;
        int max;
        (s.length() > t.length()) ? max = s.length() : max = t.length();
        int length = max + 1;
        int ss[length], tt[length], sum[length];
        memset(ss, 0, length * 4);
        memset(tt, 0, length * 4);
        memset(sum, 0, length * 4);
        int i = 0, j = max;
        for ( i = s.length()-1, j = length - 1; i >= 0; j--, i--) ss[j] = s[i] - '0';
        for ( i = t.length()-1, j = length - 1; i >= 0; j--, i--) tt[j] = t[i] - '0';

        for ( i = length - 1; i >= 0; i--){
            sum[i] = ss[i] + tt[i];
            if ( sum[i] >= 2){
                sum[i] -= 2;
                ss[i-1] += 1;
            }
        }
        if ( sum[0] == 1){
            for (int i = 0; i<length; i++) cout<<sum[i];
        }
        else {
            for (int i = 1; i<length; i++) cout<<sum[i];
        }
        cout<<endl;
    }
    return 0;
}
