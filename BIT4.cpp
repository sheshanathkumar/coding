#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf("%d", &test);
    while (test--){
        int num;
        scanf ("%ld", &num);
        long arr[num],  odd = 0, even = 0;
        for(int i = 0; i < num; i++ ){
            scanf ("%d", &arr[i]);
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
        printf ("%d\n", odd * even);
    }
    return 0;
}
