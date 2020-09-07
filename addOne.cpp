#include <bits/stdc++.h>
using namespace std;

int res[100000];

int main (){
    int t; cin>>t;
    while (t --){
        int n; cin>>n;
        int x = 0, carry;
        int arr[n];
        for (int i = 0; i < n; i ++) cin>>arr[i];

        if (arr[n-1] != 9){
            arr[n-1] = arr[n-1] + 1;
            for (int i = 0; i < n; i ++) cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else{
            res [x ++] = 0;
            carry = 1;
            for (int i = n-2; i >= 0; i --){
                if (carry){
                    int y = arr[i] + carry;
                    if (y == 10){
                        res[x ++] = 0;
                        carry = 1;
                    }
                    else{
                        res[x ++] = y;
                        carry = 0;
                    }
                }
                else{
                    res[x ++] = arr[i];
                }
            }
            if (carry){
                res[x ++] = 1;
            }

            for (int i = x - 1; i >= 0; i --) cout<<res[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
