#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf ("%d", &test);
    while (test--){
        int num, count = 0;
        scanf ("%d", &num);
        for (int i = 3; i <= num; i+=3){
            if ( num % i == 0)
                count ++;
        }
        printf ("%d\n", count);
    }
    return 0;
}
