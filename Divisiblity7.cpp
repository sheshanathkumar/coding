#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf ("%d", &test);
    while (test--){
        int rem= 0;
        string str;
        cin>>str;
        for (int i = 0; i < str.length(); i++){
            rem = rem * 10 + (str[i] - '0');
            rem = rem % 7;
        }
        cout<<rem<<"\n";
    }
    return 0;
}
