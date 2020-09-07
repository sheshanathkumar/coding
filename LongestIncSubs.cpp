#include <bits/stdc++.h>
using namespace std;

void LIS (int arr[], int n){
    int dp[n];
    for (int  i = 0; i < n; i++ ) dp[i] = 1;
    int i = 1, j = 0;

    for ( int i = 1; i < n; i++){
        for ( int j = 0; j < i; j++){
        if (arr[j] < arr[i])
            dp [i] = max (dp[i], dp[j]+1);
        }
    }

    for (int k = 0; k < n; k ++) cout <<dp[k] <<" ";
}

int main (){
    int arr[7] = {3,4,-1,0,6,2,3};
    LIS (arr, 7);
    return 0;
}
