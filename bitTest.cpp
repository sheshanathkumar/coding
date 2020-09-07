#include <bits/stdc++.h>
using namespace std;

int  main (){
    int test;
    cin>>test;
    while (test--){
    unsigned int a ,b;
    cin>> a>>b;
    for (int  i = a; i <= b; i++){
        for(int j = a+1; j <= b; j++){
            int res = i ^ j;
            cout <<i << " xor " << j<<" = "<<res <<endl;
        }
    }
    }
    return 0;
}
