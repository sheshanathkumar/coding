#include <bits/stdc++.h>
using namespace std;

int mod ( char *a, int b){
    int r = 0;
    for (int i = 0; a[i]; i++){
        r = 10 * r + (a[i] - 48);
        r = r % b;
    }
    return r;
}

int gcd (int b, int a){
    if (a==0) return b;
    gcd (a, b % a);
}

int main (){
    long test;
    cin>>test;
    while (test--){
        int b;
        char a[250];
        cin>> b;
        cin>>a;
        if( b == 0) {
            cout<<b<<endl;

        }
        else{
            cout <<gcd (b , mod(a, b));
        }
        cout<<"\n";
    }
    return 0;
}
