#include <bits/stdc++.h>
using namespace std;

int findDigit (int i){
    int c = 0;
    while ( i != 0){
        c++;
        i /= 10;
    }
    return c;
}

int main (){
    int t; scanf ("%d", &t);
    while (t --){
        int m; scanf ("%d", &m);
        int c = 0;
        for (int i = 0; i <= m; i++){
            c = c + findDigit(i);
            if ( c == m){
                printf ("%d", i);
                break;
            }
            else if (c > m){
                printf ("%d", i-1);
                break;
            }
        }
        printf ("\n");
    }
    return 0;
}
