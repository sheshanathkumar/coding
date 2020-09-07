#include <bits/stdc++.h>
using namespace std;

long powerOne (long long x){
    long count = 0;
    while (x){
        x = x & (x-1);
        count ++;
    }
    return count;
}

int main (){
    int test;
    cin >>test;
    while (test--){
        int size, k = 0;
        long long arr[size], b[size];
        long long hash [32] = {0};
        for ( int i = 0; i<size; i++){
            cin >> arr[i];
            countOne (arr[i]);
            hash [count] ++;
        }
        for (int i = 1; <32; i++){
            for (int  j = 0; j < size; j++){
                if ( hash[j] == i)
                    b[k++] = a[]
            }
        }
    }
}
