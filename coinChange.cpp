#include <bits/stdc++.h>
using namespace std;

void minCoinChange (int value, int coin[], int total){
    int dp[total+1][value+1];
    for (int i = 0; i <= total; i++){
        for (int j = 0; j <= value; j ++){
            if ( j == 0 ) dp[i][j] = 0;
            else if (i == 0) dp[i][j] = 0;
            else if ( j >= coin[i]) dp[i][j] = min (dp[i - 1][j], 1 + dp[i][ j - coin[i]]);
            else dp[i][j] = dp[i - 1][j];
        }
    }

    for (int i = 0; i<total; i++){
        for (int j = 0; j <= value; j ++) cout <<dp[i][j]<<" ";
        cout<<"\n";
    }

    //int i = total - 1, j = value;

}


int main (){
    int coin[] = {1, 5, 6, 8};
    int value = 11;
    minCoinChange (value, coin, 4);
    return 0;
}
