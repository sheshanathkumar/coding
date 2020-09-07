#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf ("%d", &test);
    while (test--){
        string s1, s2;
        cin >> s1>>s2;
        int hash1[26] = {0};
        int hash2[26] = {0}, check = 0;
        for(int i = 0; i < s1.length(); i++) hash1[s1[i] - 'a' ]++;
        for(int i = 0; i < s2.length(); i++) hash2[s2[i] - 'a' ]++;
        for(int i = 0; i < 26; i++) {
            if ( hash1[i] != 0 && hash2[i] != 0){
                printf ("Yes\n");
                check = 1;
                break;
            }
        }
        if ( !check ) printf ("No\n");
    }
    return 0;
}
