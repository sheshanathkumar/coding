#include <bits/stdc++.h>
using namespace std;

bool isPower2 (long x){
    return ( x && !(x & (x-1) ) );
}

int main (){
    long test; scanf ("%ld", &test);
    while (test--){
        long num; scanf ("%ld", &num);
        if (num % 2 != 0) printf ("Yes\n");
        else{
            if (isPower2 (num)){
                printf ("No\n");
            }
            else
                printf ("Yes\n");
        }
    }
    return 0;
}
