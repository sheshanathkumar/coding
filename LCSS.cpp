#include <bits/stdc++.h>
using namespace std;

char *lcss (string a, string b, int m, int n){
    int dp[ m+1 ][n + 1], k = 0;
    char *ans = new char[1000];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if ( i == 0) dp[i][j] = 0;
            else if ( j == 0) dp[i][j] = 0;
            else if (a [i - 1] == b [j - 1]){
                dp[i][j] = 1 + dp [i - 1][j - 1];
                k = dp[i][j];
                ans[k - 1] = a[i - 1];
            }
            else dp[i][j] = max (dp[i-1][j], dp[i][j - 1]);
        }
    }
    ans[k] = '\0';
    return ans;
}


int main (){
    string s = "abcdhiac", f = "fbdiakc";
    cout<<lcss (s, f, s.length(), f.length());
    return 0;
}
