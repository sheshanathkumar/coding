#include <bits/stdc++.h>
using namespace std;

int getMaxDigit (int x){
    int max = -1;
    while (x > 0){
        if ( max < (x % 10))
            max = (x%10);
        x /= 10;
    }
    return max;
}


int getMaxSum (int a[], int n){
    int sum = 0;
    for (int i = 0; i < n ; i++){
        sum = sum + getMaxDigit (a[i]);
    }
    return sum;
}


int main (){
    int t; scanf ("%d", &t);
    while (t --){
        int n; scanf("%d", &n);
        int a[n], flag = 0;
        for (int i = 0; i < n; i ++) cin >>a[i];
        int z = getMaxSum (a, n);
        sort (a, a+n);
        for (int i = 0; i < n -1; i ++){
            for (int j = i + 1; j < n; j ++){
                if (a[i] + z == a[j]){
                    cout<<"YES\n";
                    flag = 1;
                }
            }
        }
        if (flag == 0) cout <<"NO\n";
    }
    return 0;
}
