#include <bits/stdc++.h>
using namespace std;

int main (){
    int test; scanf ("%d", &test);
    while (test --){
        string s ; cin>>s;
        char a[s.length()];
        int i = 0, k =0;
        while ( i < s.length()){
            if (s[i] == 'L' && s[i+1] == 'I' && s[i+2] == 'E'){
                if ( a[k-1] == ' ') i += 3;
                else {
                    a[k++] = ' ';
                    i += 3;
                }
            }
            else {
                a[k] = s[i];
                k++ , i++;
            }
        }
        a[k] = '\0';
        //for (int i = 0; i < k; i++) cout<<a[i];
        if ( strlen(a) - 1 == ' ' ) a[strlen(a) - 1] = '\0';
        if ( a[0] == ' ') for (int i = 1; i < strlen(a); i++) cout <<a[i];
        else for (int i = 0; i < strlen(a); i++) cout <<a[i];
        cout<<endl;
    }
    return 0;
}
