#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf ("%d", &test);
    while (test --){
        long long num, sum = 0;
        scanf ("%lld", &num);
        for ( long long i = 3; i<= num; i++){
            bitset <32> b(i);
            if ( b.count() == 2)
                sum = sum + i;
        }
        printf ("%d\n", sum);
    }
    return 0;
}
