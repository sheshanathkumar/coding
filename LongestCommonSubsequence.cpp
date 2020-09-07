#include <bits/stdc++.h>
using namespace std;

int dp [50][50];

int lcs (string a, string b, int m, int n){
    dp[m+1][n+1];
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (a[i - 1] == b[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
            else dp[i][j] = max ( dp[i-1][j] , dp[i][j-1]);
        }
    }
    for (int i = 0; i <= m ; i++){
        for (int j = 0; j <= n; j++) cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
    return dp[m][n];
}


int main (){
    string s = "abcdaf";
    string f = "acbcf";
    cout <<lcs(s, f, s.length(), f.length());
    return 0;
}
