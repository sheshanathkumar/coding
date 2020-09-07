#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf ("%d", &test);
    while (test--){
        int N,flag = 0;
        long Z;
        scanf ("%ld",&Z);
        scanf ("%d", &N);
        long arr[N], AND, powerSet = pow (2, N), count;
        for (int i = 0; i < N; i++) scanf ("%d", &arr[i]);
        for (count = 1; count < powerSet; count ++){
            AND = Z ;
            for (int j = 0; j < N; j++){
                if ( count & ( 1 << j)) AND = AND & arr[j];
            }
           //     cout<<AND<<endl;
            if ( AND == 0){
                printf ("YES\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf ("NO\n");
    }
    return 0;
}
