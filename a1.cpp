#include <bits/stdc++.h>
using namespace std;

string getBinary (int n ){
    string x ;
    for (int i = n; i > 0; i/=2){
        if (i % 2 == 1) x = '1'+ x;
        else x = '0'+x;
    }
    return x;
}

int getNum (string x){
    int dig = 1, sum = 0;
    for (int i = x.size()-1; i >= 0; i --){
        if (x.at(i) == '1'){
            sum += dig;
        }
        dig *= 2;
    }
    return sum;
}


int main (){
    int t; scanf ("%d", &t);
    while (t --){
        int n; scanf ("%d", &n);
        int p; scanf ("%d", &p);
        string x = getBinary (n);
        if (x.at (p-1) == '1') x.at(p-1) = '0';
        else x.at(p-1) = '1';
        int t = getNum (x);
        cout <<t<<"\n";
    }
    return 0;
}
