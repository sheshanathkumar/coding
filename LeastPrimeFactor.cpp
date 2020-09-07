#include <bits/stdc++.h>
using namespace std;
#define N 100000

int prime [N];

void sieve(){
    for (int i = 2; i * i <= N; i++){
        if (prime[i] == 0){
            for (int p = i * 2; p <= N; p += i)
                prime[p] = 1;
        }
    }
}

int main (){
    sieve();
    int t; scanf ("%d", &t);
    while (t--){
        int n; scanf ("%d", &n);
        printf ("1 ");
        for (int i = 2; i <= n; i++){
            if ( i % 2 == 0) printf ("2 ");
            else if ( prime[i] == 0) printf("%d ",i);
            else {
                for (int j = 3; j <= sqrt(i); j++){
                    if (i % j == 0 && prime[j] == 0){
                        printf ("%d ",j);
                        break;
                    }
                }
            }
        }
        printf ("\n");
    }
}
