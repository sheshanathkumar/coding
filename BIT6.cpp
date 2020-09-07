#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf("%d", &test);
    while(test--){
        int N;
        scanf ("%d", &N);
        long arr[N], sum, powSet = pow (2, N) - 1, count, j, flag = 0;
        for (int i=0; i<N; i++) scanf("%d", &arr[i]);
        long value;
        scanf ("%d", &value);
        for ( count = 1; count < powSet; count++){
            sum = 0;
            for (j=0; j<N; j++){
                if (count & (1 << j)) sum = sum + arr[j];
            }
            if ( sum == value){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
        if ( flag == 0) printf("NO\n");
    }
    return 0;
}
