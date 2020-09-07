#include <bits/stdc++.h>
using namespace std;

int minCoin (int coin[], int n, int v){
    int dp[n][v+1];

    for (int i = 0; i < n; i ++){
        for (int j = 0; j <= v ; j ++){
            //if (i == 0) dp[i][j] = 99999;
            if ( j == 0 ) dp[i][j] = 0;
            else if ( j >= coin[i]) dp [i][j] = min ( dp[i -1][j], 1 + dp[i][ j - coin[i]]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n-1][v];
}

int main (){
    int t; cin>>t;
    while ( t --){
        int v , n;
        cin>>v>>n;
        int coin[n];
        for (int i = 0; i < n ; i ++) cin>> coin[i];
        sort (coin, coin + n);
        cout <<minCoin(coin, n , v)<<"\n";
    }
    return 0;
}
