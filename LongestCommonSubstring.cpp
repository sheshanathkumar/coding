#include <bits/stdc++.h>
using namespace std;

void lcs (string s, string f, int m, int n){
    int dp[m+1][n+1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j ++){
            if ( i == 0 || j == 0) dp[i][j] = 0;
            else if (s[i - 1] == f [j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
            else dp[i][j] = dp[i][j - 1];
        }
    }
    for (int i = 0; i <= m; i ++){
        for (int j = 0; j <= m; j ++) cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
}

int main (){
    string s = "apple", f = "kattappa";
    lcs (s,f,s.length(), f.length());
    return 0;
}
