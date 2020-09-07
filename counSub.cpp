#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    scanf ("%d", &test);
    while (test--){
        char s[100] , t[100];
        scanf ("%s %s", s, t);
        int hash1[26] = {0}, hash2[26] = {0};
        int flag = 0;

        if (strlen (s) != strlen(t)) printf ("NO\n");
        else{
            for (int i = 0; i < strlen(s); i++) hash1[s[i] - 'a'] ++;
            for (int i = 0; i < strlen(t); i++) hash2[t[i] - 'a'] ++;

           // for (int i = 0; i < 26; i++) cout<<hash1[i] <<"\t"<<hash2[i]<<endl;

            for (int i = 0; i < strlen(s); i++){
                if ( hash1[s[i] - 'a'] == hash2[s[i] - 'a'] ) flag = 1;
                else{
                    flag = 0;
                    printf("NO\n");
                    break;
                }
            }
            if ( flag == 1) printf ("YES\n");
        }
    }
    return 0;
}
