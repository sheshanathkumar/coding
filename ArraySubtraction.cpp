#include <bits/stdc++.h>
using namespace std;

long long mod ( char *a, long long b){
    long long r = 0;
    for (long long i = 0; a[i]; i++){
        r = 10 * r + (a[i] - 48);
        r = r % b;
    }
	cout<<"\n\n"<<r<<"\n\n";
    return r;
}

long long gcd (long long b, long long a){
    if (a==0) return b;
    gcd (a, b % a);
}

int main (){
    long long test;
    cin>>test;
    while (test--){
        char a[250];
        long long b;
        cin>> a;
        cin>>b;
        if( b == 0) {
            cout<<b<<endl;

        }
        else{
            cout <<gcd (b , mod(a, b));
        }
        putchar('\n');
    }
    return 0;
}
