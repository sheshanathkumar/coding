#include <bits/stdc++.h>
using namespace std;

int kNapsack (int wt[], int val[], int n, int m){
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i ++){
        for (int j = 0; j <= m; j ++){
            if ( i == 0 || j == 0) dp[i][j] = 0;
            else if ( wt[i - 1] <= j)
                dp[i][j] = max (val[i - 1] + dp[i - 1][j - wt[ i - 1] ] , dp [i - 1][j] );
            else dp[i][j] = dp[ i -1][j];
        }
    }

    for (int i = 0; i <= n; i ++){
        for (int j = 0; j <= m; j ++) cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
    int i =n, j = m;
    while (dp[i][j] != 0){
        int t = dp[i][j];
        if ( dp[i - 1][j] == t)
            i --;
        else {
            cout<<wt[i - 1]<<" ";
            j = j - wt[i - 1];
        }
    }
    return dp[n][m];
}

int main (){
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int n = sizeof(wt) / 4;
    int m = 7;
    cout<<kNapsack (wt, val, n , m);
    return 0;
}
